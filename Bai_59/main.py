def replace_facebook_with_pho_bo(input_string):
    words = input_string.split() 
    for i, word in enumerate(words):
        if word.lower() == "facebook":
            words[i] = "Phở Bò"
    output_string = ' '.join(words)
    return output_string

input_string = input("Nhập vào một xâu: ")
print("Xâu sau khi thay thế: ", replace_facebook_with_pho_bo(input_string))