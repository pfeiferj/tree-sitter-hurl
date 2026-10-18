# Pull job status until it is completed
GET https://api.example.org/jobs/{{job_id}}
[Options]
retry: 3

HTTP/* 200
[Asserts]
jsonpath "$.state" == "COMPLETED"
