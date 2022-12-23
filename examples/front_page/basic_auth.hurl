GET https://example.org/protected
[BasicAuth]
bob: secret


# One can also use an Authorization header
# Authorization header value can be computed with `echo -n 'bob:secret' | base64`
GET https://example.org/protected
Authorization: Basic Ym9iOnNlY3JldA==
