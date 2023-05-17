# Web Scrape images off of Bing Website based on search words
from bing_image_downloader import downloader

for query_string in ["happy mood", "sad mood", "excited", "cool", "bright colors", "dark colors", "fun", "sad anime"]:
    downloader.download(query_string, limit=5, output_dir='dataset', adult_filter_off=True, filter='photo', force_replace=False, timeout=60, verbose=True)
