# Chaining requests is easy, responses are optional
GET https://example.org/api/health

GET https://example.org/api/step1
HTTP/* 200

GET https://example.org/api/step2

GET https://example.org/api/step3
