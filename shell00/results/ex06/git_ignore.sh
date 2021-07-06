#!/bin/sh
find .* * -print -a \( -path .. -prune -o -path . -prune \) | tail -n +3 | git check-ignore --stdin
