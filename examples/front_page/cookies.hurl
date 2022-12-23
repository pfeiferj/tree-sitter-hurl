# Requests in the same Hurl file share the cookie storage
# Cookies can also be set per request    
GET http://localhost:8000/cookies/set-multiple-request-cookies
[Cookies]
user1: Bob
user2: Bill
user3: {{name}}
HTTP/1.0 200


# Or we can simply use a Cookie header
GET https://example.org/index.html
Cookie: theme=light; sessionToken=abc123
