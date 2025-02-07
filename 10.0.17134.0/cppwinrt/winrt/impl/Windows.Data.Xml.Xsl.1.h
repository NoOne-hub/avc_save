﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"
#include "winrt/impl/Windows.Data.Xml.Xsl.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl {

struct WINRT_EBO IXsltProcessor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessor>
{
    IXsltProcessor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXsltProcessor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessor2>
{
    IXsltProcessor2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXsltProcessorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXsltProcessorFactory>
{
    IXsltProcessorFactory(std::nullptr_t = nullptr) noexcept {}
};

}
