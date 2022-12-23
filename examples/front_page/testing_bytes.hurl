# Check the SHA-256 response body hash:             
GET https://example.org/data.tar.gz

HTTP/* *
[Asserts]
sha256 == hex,039058c6f2c0cb492c533b0a4d14ef77cc0f78abccced5287d84a1a2011cfb81;

# Checking Byte Order Mark (BOM) in Response Body
GET https://example.org/data.bin

HTTP/* 200
[Asserts]
bytes startsWith hex,efbbbf;
