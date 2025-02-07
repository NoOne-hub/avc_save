﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Web.Syndication.2.h"
#include "winrt/Windows.Web.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Namespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->get_Namespace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Namespace(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->put_Namespace(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationAttribute<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttribute)->put_Value(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationAttribute consume_Windows_Web_Syndication_ISyndicationAttributeFactory<D>::CreateSyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue) const
{
    Windows::Web::Syndication::SyndicationAttribute syndicationAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationAttributeFactory)->CreateSyndicationAttribute(get_abi(attributeName), get_abi(attributeNamespace), get_abi(attributeValue), put_abi(syndicationAttribute)));
    return syndicationAttribute;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationCategory<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationCategory<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->put_Label(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationCategory<D>::Scheme() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->get_Scheme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationCategory<D>::Scheme(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->put_Scheme(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationCategory<D>::Term() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->get_Term(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationCategory<D>::Term(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategory)->put_Term(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationCategory consume_Windows_Web_Syndication_ISyndicationCategoryFactory<D>::CreateSyndicationCategory(param::hstring const& term) const
{
    Windows::Web::Syndication::SyndicationCategory category{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategoryFactory)->CreateSyndicationCategory(get_abi(term), put_abi(category)));
    return category;
}

template <typename D> Windows::Web::Syndication::SyndicationCategory consume_Windows_Web_Syndication_ISyndicationCategoryFactory<D>::CreateSyndicationCategoryEx(param::hstring const& term, param::hstring const& scheme, param::hstring const& label) const
{
    Windows::Web::Syndication::SyndicationCategory category{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationCategoryFactory)->CreateSyndicationCategoryEx(get_abi(term), get_abi(scheme), get_abi(label), put_abi(category)));
    return category;
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Syndication_ISyndicationClient<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->get_ServerCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->put_ServerCredential(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Syndication_ISyndicationClient<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->get_ProxyCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->put_ProxyCredential(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Web_Syndication_ISyndicationClient<D>::MaxResponseBufferSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->get_MaxResponseBufferSize(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::MaxResponseBufferSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->put_MaxResponseBufferSize(value));
}

template <typename D> uint32_t consume_Windows_Web_Syndication_ISyndicationClient<D>::Timeout() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->get_Timeout(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::Timeout(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->put_Timeout(value));
}

template <typename D> bool consume_Windows_Web_Syndication_ISyndicationClient<D>::BypassCacheOnRetrieve() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->get_BypassCacheOnRetrieve(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::BypassCacheOnRetrieve(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->put_BypassCacheOnRetrieve(value));
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationClient<D>::SetRequestHeader(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->SetRequestHeader(get_abi(name), get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> consume_Windows_Web_Syndication_ISyndicationClient<D>::RetrieveFeedAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClient)->RetrieveFeedAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Web::Syndication::SyndicationClient consume_Windows_Web_Syndication_ISyndicationClientFactory<D>::CreateSyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) const
{
    Windows::Web::Syndication::SyndicationClient syndicationClient{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationClientFactory)->CreateSyndicationClient(get_abi(serverCredential), put_abi(syndicationClient)));
    return syndicationClient;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationContent<D>::SourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationContent)->get_SourceUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationContent<D>::SourceUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationContent)->put_SourceUri(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationContent consume_Windows_Web_Syndication_ISyndicationContentFactory<D>::CreateSyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const
{
    Windows::Web::Syndication::SyndicationContent content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationContentFactory)->CreateSyndicationContent(get_abi(text), get_abi(type), put_abi(content)));
    return content;
}

template <typename D> Windows::Web::Syndication::SyndicationContent consume_Windows_Web_Syndication_ISyndicationContentFactory<D>::CreateSyndicationContentWithSourceUri(Windows::Foundation::Uri const& sourceUri) const
{
    Windows::Web::Syndication::SyndicationContent content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationContentFactory)->CreateSyndicationContentWithSourceUri(get_abi(sourceUri), put_abi(content)));
    return content;
}

template <typename D> Windows::Web::Syndication::SyndicationErrorStatus consume_Windows_Web_Syndication_ISyndicationErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::Syndication::SyndicationErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationErrorStatics)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> consume_Windows_Web_Syndication_ISyndicationFeed<D>::Authors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Authors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> consume_Windows_Web_Syndication_ISyndicationFeed<D>::Categories() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Categories(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> consume_Windows_Web_Syndication_ISyndicationFeed<D>::Contributors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Contributors(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationGenerator consume_Windows_Web_Syndication_ISyndicationFeed<D>::Generator() const
{
    Windows::Web::Syndication::SyndicationGenerator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Generator(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Generator(Windows::Web::Syndication::SyndicationGenerator const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_Generator(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::IconUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_IconUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::IconUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_IconUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationFeed<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_Id(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> consume_Windows_Web_Syndication_ISyndicationFeed<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Items(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Web_Syndication_ISyndicationFeed<D>::LastUpdatedTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_LastUpdatedTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::LastUpdatedTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_LastUpdatedTime(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> consume_Windows_Web_Syndication_ISyndicationFeed<D>::Links() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Links(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::ImageUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_ImageUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::ImageUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_ImageUri(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationFeed<D>::Rights() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Rights(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Rights(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_Rights(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationFeed<D>::Subtitle() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Subtitle(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_Subtitle(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationFeed<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Title(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::FirstUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_FirstUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::LastUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_LastUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::NextUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_NextUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationFeed<D>::PreviousUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_PreviousUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationFormat consume_Windows_Web_Syndication_ISyndicationFeed<D>::SourceFormat() const
{
    Windows::Web::Syndication::SyndicationFormat value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->get_SourceFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::Load(param::hstring const& feed) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->Load(get_abi(feed)));
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationFeed<D>::LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& feedDocument) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeed)->LoadFromXml(get_abi(feedDocument)));
}

template <typename D> Windows::Web::Syndication::SyndicationFeed consume_Windows_Web_Syndication_ISyndicationFeedFactory<D>::CreateSyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Syndication::SyndicationFeed feed{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationFeedFactory)->CreateSyndicationFeed(get_abi(title), get_abi(subtitle), get_abi(uri), put_abi(feed)));
    return feed;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->put_Text(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->put_Uri(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationGenerator<D>::Version(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGenerator)->put_Version(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationGenerator consume_Windows_Web_Syndication_ISyndicationGeneratorFactory<D>::CreateSyndicationGenerator(param::hstring const& text) const
{
    Windows::Web::Syndication::SyndicationGenerator generator{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationGeneratorFactory)->CreateSyndicationGenerator(get_abi(text), put_abi(generator)));
    return generator;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> consume_Windows_Web_Syndication_ISyndicationItem<D>::Authors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Authors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> consume_Windows_Web_Syndication_ISyndicationItem<D>::Categories() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Categories(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> consume_Windows_Web_Syndication_ISyndicationItem<D>::Contributors() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Contributors(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::SyndicationContent consume_Windows_Web_Syndication_ISyndicationItem<D>::Content() const
{
    Windows::Web::Syndication::SyndicationContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Content(Windows::Web::Syndication::SyndicationContent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Content(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationItem<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Id(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Web_Syndication_ISyndicationItem<D>::LastUpdatedTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_LastUpdatedTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::LastUpdatedTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_LastUpdatedTime(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> consume_Windows_Web_Syndication_ISyndicationItem<D>::Links() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Links(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Web_Syndication_ISyndicationItem<D>::PublishedDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_PublishedDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::PublishedDate(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_PublishedDate(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationItem<D>::Rights() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Rights(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Rights(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Rights(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationFeed consume_Windows_Web_Syndication_ISyndicationItem<D>::Source() const
{
    Windows::Web::Syndication::SyndicationFeed value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Source(Windows::Web::Syndication::SyndicationFeed const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Source(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationItem<D>::Summary() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Summary(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Summary(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Summary(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_Syndication_ISyndicationItem<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Title(Windows::Web::Syndication::ISyndicationText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationItem<D>::CommentsUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_CommentsUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::CommentsUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->put_CommentsUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationItem<D>::EditUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_EditUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationItem<D>::EditMediaUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_EditMediaUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationItem<D>::ETag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_ETag(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationItem<D>::ItemUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->get_ItemUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::Load(param::hstring const& item) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->Load(get_abi(item)));
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationItem<D>::LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& itemDocument) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItem)->LoadFromXml(get_abi(itemDocument)));
}

template <typename D> Windows::Web::Syndication::SyndicationItem consume_Windows_Web_Syndication_ISyndicationItemFactory<D>::CreateSyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Syndication::SyndicationItem item{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationItemFactory)->CreateSyndicationItem(get_abi(title), get_abi(content), get_abi(uri), put_abi(item)));
    return item;
}

template <typename D> uint32_t consume_Windows_Web_Syndication_ISyndicationLink<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::Length(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_Length(value));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationLink<D>::MediaType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::MediaType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_MediaType(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationLink<D>::Relationship() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_Relationship(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::Relationship(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_Relationship(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationLink<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationLink<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_Uri(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationLink<D>::ResourceLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->get_ResourceLanguage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationLink<D>::ResourceLanguage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLink)->put_ResourceLanguage(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationLink consume_Windows_Web_Syndication_ISyndicationLinkFactory<D>::CreateSyndicationLink(Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Syndication::SyndicationLink link{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLinkFactory)->CreateSyndicationLink(get_abi(uri), put_abi(link)));
    return link;
}

template <typename D> Windows::Web::Syndication::SyndicationLink consume_Windows_Web_Syndication_ISyndicationLinkFactory<D>::CreateSyndicationLinkEx(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length) const
{
    Windows::Web::Syndication::SyndicationLink link{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationLinkFactory)->CreateSyndicationLinkEx(get_abi(uri), get_abi(relationship), get_abi(title), get_abi(mediaType), length, put_abi(link)));
    return link;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_NodeName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->put_NodeName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_NodeNamespace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeNamespace(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->put_NodeNamespace(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeValue() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_NodeValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationNode<D>::NodeValue(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->put_NodeValue(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationNode<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationNode<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->put_Language(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationNode<D>::BaseUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_BaseUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationNode<D>::BaseUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->put_BaseUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> consume_Windows_Web_Syndication_ISyndicationNode<D>::AttributeExtensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_AttributeExtensions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> consume_Windows_Web_Syndication_ISyndicationNode<D>::ElementExtensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->get_ElementExtensions(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Web_Syndication_ISyndicationNode<D>::GetXmlDocument(Windows::Web::Syndication::SyndicationFormat const& format) const
{
    Windows::Data::Xml::Dom::XmlDocument xmlDocument{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNode)->GetXmlDocument(get_abi(format), put_abi(xmlDocument)));
    return xmlDocument;
}

template <typename D> Windows::Web::Syndication::SyndicationNode consume_Windows_Web_Syndication_ISyndicationNodeFactory<D>::CreateSyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue) const
{
    Windows::Web::Syndication::SyndicationNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationNodeFactory)->CreateSyndicationNode(get_abi(nodeName), get_abi(nodeNamespace), get_abi(nodeValue), put_abi(node)));
    return node;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationPerson<D>::Email() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->get_Email(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationPerson<D>::Email(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->put_Email(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationPerson<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationPerson<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->put_Name(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Syndication_ISyndicationPerson<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationPerson<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPerson)->put_Uri(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationPerson consume_Windows_Web_Syndication_ISyndicationPersonFactory<D>::CreateSyndicationPerson(param::hstring const& name) const
{
    Windows::Web::Syndication::SyndicationPerson person{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPersonFactory)->CreateSyndicationPerson(get_abi(name), put_abi(person)));
    return person;
}

template <typename D> Windows::Web::Syndication::SyndicationPerson consume_Windows_Web_Syndication_ISyndicationPersonFactory<D>::CreateSyndicationPersonEx(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Syndication::SyndicationPerson person{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationPersonFactory)->CreateSyndicationPersonEx(get_abi(name), get_abi(email), get_abi(uri), put_abi(person)));
    return person;
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationText<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationText<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->put_Text(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Syndication_ISyndicationText<D>::Type() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationText<D>::Type(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->put_Type(get_abi(value)));
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Web_Syndication_ISyndicationText<D>::Xml() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->get_Xml(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Syndication_ISyndicationText<D>::Xml(Windows::Data::Xml::Dom::XmlDocument const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationText)->put_Xml(get_abi(value)));
}

template <typename D> Windows::Web::Syndication::SyndicationText consume_Windows_Web_Syndication_ISyndicationTextFactory<D>::CreateSyndicationText(param::hstring const& text) const
{
    Windows::Web::Syndication::SyndicationText syndicationText{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationTextFactory)->CreateSyndicationText(get_abi(text), put_abi(syndicationText)));
    return syndicationText;
}

template <typename D> Windows::Web::Syndication::SyndicationText consume_Windows_Web_Syndication_ISyndicationTextFactory<D>::CreateSyndicationTextEx(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const
{
    Windows::Web::Syndication::SyndicationText syndicationText{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Syndication::ISyndicationTextFactory)->CreateSyndicationTextEx(get_abi(text), get_abi(type), put_abi(syndicationText)));
    return syndicationText;
}

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationAttribute> : produce_base<D, Windows::Web::Syndication::ISyndicationAttribute>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Namespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Namespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Namespace(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Namespace(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationAttributeFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationAttributeFactory>
{
    HRESULT __stdcall CreateSyndicationAttribute(HSTRING attributeName, HSTRING attributeNamespace, HSTRING attributeValue, void** syndicationAttribute) noexcept final
    {
        try
        {
            *syndicationAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *syndicationAttribute = detach_from<Windows::Web::Syndication::SyndicationAttribute>(this->shim().CreateSyndicationAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<hstring const*>(&attributeNamespace), *reinterpret_cast<hstring const*>(&attributeValue)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationCategory> : produce_base<D, Windows::Web::Syndication::ISyndicationCategory>
{
    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scheme(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scheme(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Term(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Term());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Term(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Term(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationCategoryFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationCategoryFactory>
{
    HRESULT __stdcall CreateSyndicationCategory(HSTRING term, void** category) noexcept final
    {
        try
        {
            *category = nullptr;
            typename D::abi_guard guard(this->shim());
            *category = detach_from<Windows::Web::Syndication::SyndicationCategory>(this->shim().CreateSyndicationCategory(*reinterpret_cast<hstring const*>(&term)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSyndicationCategoryEx(HSTRING term, HSTRING scheme, HSTRING label, void** category) noexcept final
    {
        try
        {
            *category = nullptr;
            typename D::abi_guard guard(this->shim());
            *category = detach_from<Windows::Web::Syndication::SyndicationCategory>(this->shim().CreateSyndicationCategoryEx(*reinterpret_cast<hstring const*>(&term), *reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&label)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationClient> : produce_base<D, Windows::Web::Syndication::ISyndicationClient>
{
    HRESULT __stdcall get_ServerCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResponseBufferSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxResponseBufferSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResponseBufferSize(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResponseBufferSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timeout(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Timeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timeout(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timeout(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BypassCacheOnRetrieve(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BypassCacheOnRetrieve());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BypassCacheOnRetrieve(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BypassCacheOnRetrieve(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetRequestHeader(HSTRING name, HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RetrieveFeedAsync(void* uri, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress>>(this->shim().RetrieveFeedAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationClientFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationClientFactory>
{
    HRESULT __stdcall CreateSyndicationClient(void* serverCredential, void** syndicationClient) noexcept final
    {
        try
        {
            *syndicationClient = nullptr;
            typename D::abi_guard guard(this->shim());
            *syndicationClient = detach_from<Windows::Web::Syndication::SyndicationClient>(this->shim().CreateSyndicationClient(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&serverCredential)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationContent> : produce_base<D, Windows::Web::Syndication::ISyndicationContent>
{
    HRESULT __stdcall get_SourceUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SourceUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SourceUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationContentFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationContentFactory>
{
    HRESULT __stdcall CreateSyndicationContent(HSTRING text, Windows::Web::Syndication::SyndicationTextType type, void** content) noexcept final
    {
        try
        {
            *content = nullptr;
            typename D::abi_guard guard(this->shim());
            *content = detach_from<Windows::Web::Syndication::SyndicationContent>(this->shim().CreateSyndicationContent(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Web::Syndication::SyndicationTextType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSyndicationContentWithSourceUri(void* sourceUri, void** content) noexcept final
    {
        try
        {
            *content = nullptr;
            typename D::abi_guard guard(this->shim());
            *content = detach_from<Windows::Web::Syndication::SyndicationContent>(this->shim().CreateSyndicationContentWithSourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&sourceUri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationErrorStatics> : produce_base<D, Windows::Web::Syndication::ISyndicationErrorStatics>
{
    HRESULT __stdcall GetStatus(int32_t hresult, Windows::Web::Syndication::SyndicationErrorStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Web::Syndication::SyndicationErrorStatus>(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationFeed> : produce_base<D, Windows::Web::Syndication::ISyndicationFeed>
{
    HRESULT __stdcall get_Authors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>>(this->shim().Authors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory>>(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contributors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>>(this->shim().Contributors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Generator(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::SyndicationGenerator>(this->shim().Generator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Generator(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Generator(*reinterpret_cast<Windows::Web::Syndication::SyndicationGenerator const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IconUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().IconUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IconUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastUpdatedTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastUpdatedTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LastUpdatedTime(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastUpdatedTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Links(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink>>(this->shim().Links());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImageUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ImageUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ImageUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rights(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Rights());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rights(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rights(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtitle(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Title(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FirstUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().FirstUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().LastUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NextUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().NextUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().PreviousUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SourceFormat(Windows::Web::Syndication::SyndicationFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::SyndicationFormat>(this->shim().SourceFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Load(HSTRING feed) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Load(*reinterpret_cast<hstring const*>(&feed));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadFromXml(void* feedDocument) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadFromXml(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&feedDocument));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationFeedFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationFeedFactory>
{
    HRESULT __stdcall CreateSyndicationFeed(HSTRING title, HSTRING subtitle, void* uri, void** feed) noexcept final
    {
        try
        {
            *feed = nullptr;
            typename D::abi_guard guard(this->shim());
            *feed = detach_from<Windows::Web::Syndication::SyndicationFeed>(this->shim().CreateSyndicationFeed(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<hstring const*>(&subtitle), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationGenerator> : produce_base<D, Windows::Web::Syndication::ISyndicationGenerator>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Version(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationGeneratorFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationGeneratorFactory>
{
    HRESULT __stdcall CreateSyndicationGenerator(HSTRING text, void** generator) noexcept final
    {
        try
        {
            *generator = nullptr;
            typename D::abi_guard guard(this->shim());
            *generator = detach_from<Windows::Web::Syndication::SyndicationGenerator>(this->shim().CreateSyndicationGenerator(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationItem> : produce_base<D, Windows::Web::Syndication::ISyndicationItem>
{
    HRESULT __stdcall get_Authors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>>(this->shim().Authors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory>>(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Contributors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson>>(this->shim().Contributors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::SyndicationContent>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Content(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<Windows::Web::Syndication::SyndicationContent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Id(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastUpdatedTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastUpdatedTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LastUpdatedTime(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastUpdatedTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Links(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink>>(this->shim().Links());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PublishedDate(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().PublishedDate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PublishedDate(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PublishedDate(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rights(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Rights());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rights(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rights(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::SyndicationFeed>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Source(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Web::Syndication::SyndicationFeed const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Summary(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Summary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Summary(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Summary(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Title(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Syndication::ISyndicationText>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<Windows::Web::Syndication::ISyndicationText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommentsUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().CommentsUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CommentsUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommentsUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EditUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().EditUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EditMediaUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().EditMediaUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ETag(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ETag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ItemUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Load(HSTRING item) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Load(*reinterpret_cast<hstring const*>(&item));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadFromXml(void* itemDocument) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadFromXml(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&itemDocument));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationItemFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationItemFactory>
{
    HRESULT __stdcall CreateSyndicationItem(HSTRING title, void* content, void* uri, void** item) noexcept final
    {
        try
        {
            *item = nullptr;
            typename D::abi_guard guard(this->shim());
            *item = detach_from<Windows::Web::Syndication::SyndicationItem>(this->shim().CreateSyndicationItem(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Web::Syndication::SyndicationContent const*>(&content), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationLink> : produce_base<D, Windows::Web::Syndication::ISyndicationLink>
{
    HRESULT __stdcall get_Length(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Relationship(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Relationship());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Relationship(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Relationship(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceLanguage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ResourceLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceLanguage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResourceLanguage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationLinkFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationLinkFactory>
{
    HRESULT __stdcall CreateSyndicationLink(void* uri, void** link) noexcept final
    {
        try
        {
            *link = nullptr;
            typename D::abi_guard guard(this->shim());
            *link = detach_from<Windows::Web::Syndication::SyndicationLink>(this->shim().CreateSyndicationLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSyndicationLinkEx(void* uri, HSTRING relationship, HSTRING title, HSTRING mediaType, uint32_t length, void** link) noexcept final
    {
        try
        {
            *link = nullptr;
            typename D::abi_guard guard(this->shim());
            *link = detach_from<Windows::Web::Syndication::SyndicationLink>(this->shim().CreateSyndicationLinkEx(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&relationship), *reinterpret_cast<hstring const*>(&title), *reinterpret_cast<hstring const*>(&mediaType), length));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationNode> : produce_base<D, Windows::Web::Syndication::ISyndicationNode>
{
    HRESULT __stdcall get_NodeName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NodeName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NodeName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NodeName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NodeNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NodeNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NodeNamespace(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NodeNamespace(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NodeValue(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NodeValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NodeValue(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NodeValue(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BaseUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().BaseUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BaseUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BaseUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeExtensions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute>>(this->shim().AttributeExtensions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ElementExtensions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode>>(this->shim().ElementExtensions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetXmlDocument(Windows::Web::Syndication::SyndicationFormat format, void** xmlDocument) noexcept final
    {
        try
        {
            *xmlDocument = nullptr;
            typename D::abi_guard guard(this->shim());
            *xmlDocument = detach_from<Windows::Data::Xml::Dom::XmlDocument>(this->shim().GetXmlDocument(*reinterpret_cast<Windows::Web::Syndication::SyndicationFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationNodeFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationNodeFactory>
{
    HRESULT __stdcall CreateSyndicationNode(HSTRING nodeName, HSTRING nodeNamespace, HSTRING nodeValue, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Web::Syndication::SyndicationNode>(this->shim().CreateSyndicationNode(*reinterpret_cast<hstring const*>(&nodeName), *reinterpret_cast<hstring const*>(&nodeNamespace), *reinterpret_cast<hstring const*>(&nodeValue)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationPerson> : produce_base<D, Windows::Web::Syndication::ISyndicationPerson>
{
    HRESULT __stdcall get_Email(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Email());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Email(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Email(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationPersonFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationPersonFactory>
{
    HRESULT __stdcall CreateSyndicationPerson(HSTRING name, void** person) noexcept final
    {
        try
        {
            *person = nullptr;
            typename D::abi_guard guard(this->shim());
            *person = detach_from<Windows::Web::Syndication::SyndicationPerson>(this->shim().CreateSyndicationPerson(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSyndicationPersonEx(HSTRING name, HSTRING email, void* uri, void** person) noexcept final
    {
        try
        {
            *person = nullptr;
            typename D::abi_guard guard(this->shim());
            *person = detach_from<Windows::Web::Syndication::SyndicationPerson>(this->shim().CreateSyndicationPersonEx(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&email), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationText> : produce_base<D, Windows::Web::Syndication::ISyndicationText>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Type(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Xml(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlDocument>(this->shim().Xml());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Xml(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Xml(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Syndication::ISyndicationTextFactory> : produce_base<D, Windows::Web::Syndication::ISyndicationTextFactory>
{
    HRESULT __stdcall CreateSyndicationText(HSTRING text, void** syndicationText) noexcept final
    {
        try
        {
            *syndicationText = nullptr;
            typename D::abi_guard guard(this->shim());
            *syndicationText = detach_from<Windows::Web::Syndication::SyndicationText>(this->shim().CreateSyndicationText(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSyndicationTextEx(HSTRING text, Windows::Web::Syndication::SyndicationTextType type, void** syndicationText) noexcept final
    {
        try
        {
            *syndicationText = nullptr;
            typename D::abi_guard guard(this->shim());
            *syndicationText = detach_from<Windows::Web::Syndication::SyndicationText>(this->shim().CreateSyndicationTextEx(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::Web::Syndication::SyndicationTextType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::Syndication {

inline SyndicationAttribute::SyndicationAttribute() :
    SyndicationAttribute(get_activation_factory<SyndicationAttribute>().ActivateInstance<SyndicationAttribute>())
{}

inline SyndicationAttribute::SyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue) :
    SyndicationAttribute(get_activation_factory<SyndicationAttribute, Windows::Web::Syndication::ISyndicationAttributeFactory>().CreateSyndicationAttribute(attributeName, attributeNamespace, attributeValue))
{}

inline SyndicationCategory::SyndicationCategory() :
    SyndicationCategory(get_activation_factory<SyndicationCategory>().ActivateInstance<SyndicationCategory>())
{}

inline SyndicationCategory::SyndicationCategory(param::hstring const& term) :
    SyndicationCategory(get_activation_factory<SyndicationCategory, Windows::Web::Syndication::ISyndicationCategoryFactory>().CreateSyndicationCategory(term))
{}

inline SyndicationCategory::SyndicationCategory(param::hstring const& term, param::hstring const& scheme, param::hstring const& label) :
    SyndicationCategory(get_activation_factory<SyndicationCategory, Windows::Web::Syndication::ISyndicationCategoryFactory>().CreateSyndicationCategoryEx(term, scheme, label))
{}

inline SyndicationClient::SyndicationClient() :
    SyndicationClient(get_activation_factory<SyndicationClient>().ActivateInstance<SyndicationClient>())
{}

inline SyndicationClient::SyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) :
    SyndicationClient(get_activation_factory<SyndicationClient, Windows::Web::Syndication::ISyndicationClientFactory>().CreateSyndicationClient(serverCredential))
{}

inline SyndicationContent::SyndicationContent() :
    SyndicationContent(get_activation_factory<SyndicationContent>().ActivateInstance<SyndicationContent>())
{}

inline SyndicationContent::SyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) :
    SyndicationContent(get_activation_factory<SyndicationContent, Windows::Web::Syndication::ISyndicationContentFactory>().CreateSyndicationContent(text, type))
{}

inline SyndicationContent::SyndicationContent(Windows::Foundation::Uri const& sourceUri) :
    SyndicationContent(get_activation_factory<SyndicationContent, Windows::Web::Syndication::ISyndicationContentFactory>().CreateSyndicationContentWithSourceUri(sourceUri))
{}

inline Windows::Web::Syndication::SyndicationErrorStatus SyndicationError::GetStatus(int32_t hresult)
{
    return get_activation_factory<SyndicationError, Windows::Web::Syndication::ISyndicationErrorStatics>().GetStatus(hresult);
}

inline SyndicationFeed::SyndicationFeed() :
    SyndicationFeed(get_activation_factory<SyndicationFeed>().ActivateInstance<SyndicationFeed>())
{}

inline SyndicationFeed::SyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri) :
    SyndicationFeed(get_activation_factory<SyndicationFeed, Windows::Web::Syndication::ISyndicationFeedFactory>().CreateSyndicationFeed(title, subtitle, uri))
{}

inline SyndicationGenerator::SyndicationGenerator() :
    SyndicationGenerator(get_activation_factory<SyndicationGenerator>().ActivateInstance<SyndicationGenerator>())
{}

inline SyndicationGenerator::SyndicationGenerator(param::hstring const& text) :
    SyndicationGenerator(get_activation_factory<SyndicationGenerator, Windows::Web::Syndication::ISyndicationGeneratorFactory>().CreateSyndicationGenerator(text))
{}

inline SyndicationItem::SyndicationItem() :
    SyndicationItem(get_activation_factory<SyndicationItem>().ActivateInstance<SyndicationItem>())
{}

inline SyndicationItem::SyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri) :
    SyndicationItem(get_activation_factory<SyndicationItem, Windows::Web::Syndication::ISyndicationItemFactory>().CreateSyndicationItem(title, content, uri))
{}

inline SyndicationLink::SyndicationLink() :
    SyndicationLink(get_activation_factory<SyndicationLink>().ActivateInstance<SyndicationLink>())
{}

inline SyndicationLink::SyndicationLink(Windows::Foundation::Uri const& uri) :
    SyndicationLink(get_activation_factory<SyndicationLink, Windows::Web::Syndication::ISyndicationLinkFactory>().CreateSyndicationLink(uri))
{}

inline SyndicationLink::SyndicationLink(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length) :
    SyndicationLink(get_activation_factory<SyndicationLink, Windows::Web::Syndication::ISyndicationLinkFactory>().CreateSyndicationLinkEx(uri, relationship, title, mediaType, length))
{}

inline SyndicationNode::SyndicationNode() :
    SyndicationNode(get_activation_factory<SyndicationNode>().ActivateInstance<SyndicationNode>())
{}

inline SyndicationNode::SyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue) :
    SyndicationNode(get_activation_factory<SyndicationNode, Windows::Web::Syndication::ISyndicationNodeFactory>().CreateSyndicationNode(nodeName, nodeNamespace, nodeValue))
{}

inline SyndicationPerson::SyndicationPerson() :
    SyndicationPerson(get_activation_factory<SyndicationPerson>().ActivateInstance<SyndicationPerson>())
{}

inline SyndicationPerson::SyndicationPerson(param::hstring const& name) :
    SyndicationPerson(get_activation_factory<SyndicationPerson, Windows::Web::Syndication::ISyndicationPersonFactory>().CreateSyndicationPerson(name))
{}

inline SyndicationPerson::SyndicationPerson(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri) :
    SyndicationPerson(get_activation_factory<SyndicationPerson, Windows::Web::Syndication::ISyndicationPersonFactory>().CreateSyndicationPersonEx(name, email, uri))
{}

inline SyndicationText::SyndicationText() :
    SyndicationText(get_activation_factory<SyndicationText>().ActivateInstance<SyndicationText>())
{}

inline SyndicationText::SyndicationText(param::hstring const& text) :
    SyndicationText(get_activation_factory<SyndicationText, Windows::Web::Syndication::ISyndicationTextFactory>().CreateSyndicationText(text))
{}

inline SyndicationText::SyndicationText(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) :
    SyndicationText(get_activation_factory<SyndicationText, Windows::Web::Syndication::ISyndicationTextFactory>().CreateSyndicationTextEx(text, type))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationAttribute> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationAttribute> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationAttributeFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationAttributeFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationCategory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationCategory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationCategoryFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationCategoryFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationClient> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationClient> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationClientFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationClientFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationContent> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationContent> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationContentFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationContentFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationErrorStatics> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationErrorStatics> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationFeed> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationFeed> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationFeedFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationFeedFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationGenerator> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationGenerator> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationGeneratorFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationGeneratorFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationItem> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationItem> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationItemFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationItemFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationLink> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationLink> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationLinkFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationLinkFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationNode> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationNode> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationNodeFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationNodeFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationPerson> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationPerson> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationPersonFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationPersonFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationText> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationText> {};
template<> struct hash<winrt::Windows::Web::Syndication::ISyndicationTextFactory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::ISyndicationTextFactory> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationAttribute> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationAttribute> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationCategory> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationCategory> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationClient> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationClient> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationContent> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationContent> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationError> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationError> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationFeed> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationFeed> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationGenerator> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationGenerator> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationItem> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationItem> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationLink> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationLink> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationNode> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationNode> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationPerson> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationPerson> {};
template<> struct hash<winrt::Windows::Web::Syndication::SyndicationText> : winrt::impl::hash_base<winrt::Windows::Web::Syndication::SyndicationText> {};

}

WINRT_WARNING_POP
