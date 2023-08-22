GET https://example.org/api

HTTP 200
[Captures]
name: jsonpath "$user.id" replace /\d/ "x"
[Asserts]
header "x-servers" split "," count == 2
header "x-servers" split "," nth 0 == "rec1"
header "x-servers" split "," nth 1 == "rec3"
jsonpath "$.books" count == 12
