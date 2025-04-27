# Compile asn Files With asn1c

## Requirements

- [asn1c](https://github.com/mouse07410/asn1c)

```sh
asn1c -gen-PER -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice ../asn1/e2sm-v5.00.asn ../asn1/e2sm-kpm-v4.00.asn
```

## Rewrite converter-example.c

To avoid a Go error `A reference to undefined reference 'ASN_DEF_1'`:

```shell
echo "" > converter-example.c
```