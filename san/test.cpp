#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "json.h"

int main()
{
	json_settings settings = { 0 };
	const char *buf = "{\"foo\": \"bar\"}";
	json_value *val = json_parse_ex(&settings, buf, strlen(buf), 0);
	const json_value &foo = (*val)["foo"];
	printf("foo: %s\n", (const char *)foo);
}

