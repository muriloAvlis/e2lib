# Compile asn Files With asn1c

## Requirements

- [asn1c](https://github.com/mouse07410/asn1c)

## Building C files

```sh
asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -D <target-dir> <asn-files>
```

### Example with E2SM-KPM asn files

```shell
cd asn1/oran/e2sm
asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D kpm E2SM-v07.00.asn E2SM-KPM-v06.00.asn
```

## Rewrite converter-example.c

To avoid a Go error `A reference to undefined reference 'ASN_DEF_1'`:

```shell
echo "" > converter-example.c
```