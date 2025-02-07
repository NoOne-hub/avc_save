﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IDtdEntity<D>::PublicId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IDtdEntity)->get_PublicId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IDtdEntity<D>::SystemId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IDtdEntity)->get_SystemId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IDtdEntity<D>::NotationName() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IDtdEntity)->get_NotationName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IDtdNotation<D>::PublicId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IDtdNotation)->get_PublicId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IDtdNotation<D>::SystemId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IDtdNotation)->get_SystemId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlAttribute<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlAttribute)->get_Name(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlAttribute<D>::Specified() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlAttribute)->get_Specified(&value));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlAttribute<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlAttribute)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlAttribute<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlAttribute)->put_Value(get_abi(value)));
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::Data() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::Data(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->put_Data(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->get_Length(&value));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::SubstringData(uint32_t offset, uint32_t count) const
{
    hstring data{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->SubstringData(offset, count, put_abi(data)));
    return data;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::AppendData(param::hstring const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->AppendData(get_abi(data)));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::InsertData(uint32_t offset, param::hstring const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->InsertData(offset, get_abi(data)));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::DeleteData(uint32_t offset, uint32_t count) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->DeleteData(offset, count));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>::ReplaceData(uint32_t offset, uint32_t count, param::hstring const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlCharacterData)->ReplaceData(offset, count, get_abi(data)));
}

template <typename D> Windows::Data::Xml::Dom::XmlDocumentType consume_Windows_Data_Xml_Dom_IXmlDocument<D>::Doctype() const
{
    Windows::Data::Xml::Dom::XmlDocumentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->get_Doctype(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDomImplementation consume_Windows_Data_Xml_Dom_IXmlDocument<D>::Implementation() const
{
    Windows::Data::Xml::Dom::XmlDomImplementation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->get_Implementation(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement consume_Windows_Data_Xml_Dom_IXmlDocument<D>::DocumentElement() const
{
    Windows::Data::Xml::Dom::XmlElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->get_DocumentElement(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateElement(param::hstring const& tagName) const
{
    Windows::Data::Xml::Dom::XmlElement newElement{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateElement(get_abi(tagName), put_abi(newElement)));
    return newElement;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocumentFragment consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateDocumentFragment() const
{
    Windows::Data::Xml::Dom::XmlDocumentFragment newDocumentFragment{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateDocumentFragment(put_abi(newDocumentFragment)));
    return newDocumentFragment;
}

template <typename D> Windows::Data::Xml::Dom::XmlText consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateTextNode(param::hstring const& data) const
{
    Windows::Data::Xml::Dom::XmlText newTextNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateTextNode(get_abi(data), put_abi(newTextNode)));
    return newTextNode;
}

template <typename D> Windows::Data::Xml::Dom::XmlComment consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateComment(param::hstring const& data) const
{
    Windows::Data::Xml::Dom::XmlComment newComment{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateComment(get_abi(data), put_abi(newComment)));
    return newComment;
}

template <typename D> Windows::Data::Xml::Dom::XmlProcessingInstruction consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateProcessingInstruction(param::hstring const& target, param::hstring const& data) const
{
    Windows::Data::Xml::Dom::XmlProcessingInstruction newProcessingInstruction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateProcessingInstruction(get_abi(target), get_abi(data), put_abi(newProcessingInstruction)));
    return newProcessingInstruction;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateAttribute(param::hstring const& name) const
{
    Windows::Data::Xml::Dom::XmlAttribute newAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateAttribute(get_abi(name), put_abi(newAttribute)));
    return newAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlEntityReference consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateEntityReference(param::hstring const& name) const
{
    Windows::Data::Xml::Dom::XmlEntityReference newEntityReference{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateEntityReference(get_abi(name), put_abi(newEntityReference)));
    return newEntityReference;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList consume_Windows_Data_Xml_Dom_IXmlDocument<D>::GetElementsByTagName(param::hstring const& tagName) const
{
    Windows::Data::Xml::Dom::XmlNodeList elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->GetElementsByTagName(get_abi(tagName), put_abi(elements)));
    return elements;
}

template <typename D> Windows::Data::Xml::Dom::XmlCDataSection consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateCDataSection(param::hstring const& data) const
{
    Windows::Data::Xml::Dom::XmlCDataSection newCDataSection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateCDataSection(get_abi(data), put_abi(newCDataSection)));
    return newCDataSection;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlDocument<D>::DocumentUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->get_DocumentUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName) const
{
    Windows::Data::Xml::Dom::XmlAttribute newAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateAttributeNS(get_abi(namespaceUri), get_abi(qualifiedName), put_abi(newAttribute)));
    return newAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement consume_Windows_Data_Xml_Dom_IXmlDocument<D>::CreateElementNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName) const
{
    Windows::Data::Xml::Dom::XmlElement newElement{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->CreateElementNS(get_abi(namespaceUri), get_abi(qualifiedName), put_abi(newElement)));
    return newElement;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement consume_Windows_Data_Xml_Dom_IXmlDocument<D>::GetElementById(param::hstring const& elementId) const
{
    Windows::Data::Xml::Dom::XmlElement element{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->GetElementById(get_abi(elementId), put_abi(element)));
    return element;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlDocument<D>::ImportNode(Windows::Data::Xml::Dom::IXmlNode const& node, bool deep) const
{
    Windows::Data::Xml::Dom::IXmlNode newNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocument)->ImportNode(get_abi(node), deep, put_abi(newNode)));
    return newNode;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlDocumentIO<D>::LoadXml(param::hstring const& xml) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentIO)->LoadXml(get_abi(xml)));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlDocumentIO<D>::LoadXml(param::hstring const& xml, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentIO)->LoadXmlWithSettings(get_abi(xml), get_abi(loadSettings)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Data_Xml_Dom_IXmlDocumentIO<D>::SaveToFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentIO)->SaveToFileAsync(get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlDocumentIO2<D>::LoadXmlFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentIO2)->LoadXmlFromBuffer(get_abi(buffer)));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlDocumentIO2<D>::LoadXmlFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentIO2)->LoadXmlFromBufferWithSettings(get_abi(buffer), get_abi(loadSettings)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> consume_Windows_Data_Xml_Dom_IXmlDocumentStatics<D>::LoadFromUriAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentStatics)->LoadFromUriAsync(get_abi(uri), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> consume_Windows_Data_Xml_Dom_IXmlDocumentStatics<D>::LoadFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentStatics)->LoadFromUriWithSettingsAsync(get_abi(uri), get_abi(loadSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> consume_Windows_Data_Xml_Dom_IXmlDocumentStatics<D>::LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentStatics)->LoadFromFileAsync(get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> consume_Windows_Data_Xml_Dom_IXmlDocumentStatics<D>::LoadFromFileAsync(Windows::Storage::IStorageFile const& file, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentStatics)->LoadFromFileWithSettingsAsync(get_abi(file), get_abi(loadSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlDocumentType<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentType)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap consume_Windows_Data_Xml_Dom_IXmlDocumentType<D>::Entities() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentType)->get_Entities(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap consume_Windows_Data_Xml_Dom_IXmlDocumentType<D>::Notations() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDocumentType)->get_Notations(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlDomImplementation<D>::HasFeature(param::hstring const& feature, Windows::Foundation::IInspectable const& version) const
{
    bool featureSupported{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlDomImplementation)->HasFeature(get_abi(feature), get_abi(version), &featureSupported));
    return featureSupported;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlElement<D>::TagName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->get_TagName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlElement<D>::GetAttribute(param::hstring const& attributeName) const
{
    hstring attributeValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->GetAttribute(get_abi(attributeName), put_abi(attributeValue)));
    return attributeValue;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlElement<D>::SetAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->SetAttribute(get_abi(attributeName), get_abi(attributeValue)));
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlElement<D>::RemoveAttribute(param::hstring const& attributeName) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->RemoveAttribute(get_abi(attributeName)));
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlElement<D>::GetAttributeNode(param::hstring const& attributeName) const
{
    Windows::Data::Xml::Dom::XmlAttribute attributeNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->GetAttributeNode(get_abi(attributeName), put_abi(attributeNode)));
    return attributeNode;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlElement<D>::SetAttributeNode(Windows::Data::Xml::Dom::XmlAttribute const& newAttribute) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->SetAttributeNode(get_abi(newAttribute), put_abi(previousAttribute)));
    return previousAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlElement<D>::RemoveAttributeNode(Windows::Data::Xml::Dom::XmlAttribute const& attributeNode) const
{
    Windows::Data::Xml::Dom::XmlAttribute removedAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->RemoveAttributeNode(get_abi(attributeNode), put_abi(removedAttribute)));
    return removedAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList consume_Windows_Data_Xml_Dom_IXmlElement<D>::GetElementsByTagName(param::hstring const& tagName) const
{
    Windows::Data::Xml::Dom::XmlNodeList elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->GetElementsByTagName(get_abi(tagName), put_abi(elements)));
    return elements;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlElement<D>::SetAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->SetAttributeNS(get_abi(namespaceUri), get_abi(qualifiedName), get_abi(value)));
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlElement<D>::GetAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->GetAttributeNS(get_abi(namespaceUri), get_abi(localName), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlElement<D>::RemoveAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->RemoveAttributeNS(get_abi(namespaceUri), get_abi(localName)));
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlElement<D>::SetAttributeNodeNS(Windows::Data::Xml::Dom::XmlAttribute const& newAttribute) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->SetAttributeNodeNS(get_abi(newAttribute), put_abi(previousAttribute)));
    return previousAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute consume_Windows_Data_Xml_Dom_IXmlElement<D>::GetAttributeNodeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlElement)->GetAttributeNodeNS(get_abi(namespaceUri), get_abi(localName), put_abi(previousAttribute)));
    return previousAttribute;
}

template <typename D> uint32_t consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::MaxElementDepth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->get_MaxElementDepth(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::MaxElementDepth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->put_MaxElementDepth(value));
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ProhibitDtd() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->get_ProhibitDtd(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ProhibitDtd(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->put_ProhibitDtd(value));
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ResolveExternals() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->get_ResolveExternals(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ResolveExternals(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->put_ResolveExternals(value));
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ValidateOnParse() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->get_ValidateOnParse(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ValidateOnParse(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->put_ValidateOnParse(value));
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ElementContentWhiteSpace() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->get_ElementContentWhiteSpace(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>::ElementContentWhiteSpace(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlLoadSettings)->put_ElementContentWhiteSpace(value));
}

template <typename D> uint32_t consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->get_Length(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::Item(uint32_t index) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->Item(index, put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::GetNamedItem(param::hstring const& name) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->GetNamedItem(get_abi(name), put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::SetNamedItem(Windows::Data::Xml::Dom::IXmlNode const& node) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->SetNamedItem(get_abi(node), put_abi(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::RemoveNamedItem(param::hstring const& name) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->RemoveNamedItem(get_abi(name), put_abi(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::GetNamedItemNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& name) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->GetNamedItemNS(get_abi(namespaceUri), get_abi(name), put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::RemoveNamedItemNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& name) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->RemoveNamedItemNS(get_abi(namespaceUri), get_abi(name), put_abi(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>::SetNamedItemNS(Windows::Data::Xml::Dom::IXmlNode const& node) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNamedNodeMap)->SetNamedItemNS(get_abi(node), put_abi(previousNode)));
    return previousNode;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IXmlNode<D>::NodeValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_NodeValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlNode<D>::NodeValue(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->put_NodeValue(get_abi(value)));
}

template <typename D> Windows::Data::Xml::Dom::NodeType consume_Windows_Data_Xml_Dom_IXmlNode<D>::NodeType() const
{
    Windows::Data::Xml::Dom::NodeType value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_NodeType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlNode<D>::NodeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_NodeName(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::ParentNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_ParentNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList consume_Windows_Data_Xml_Dom_IXmlNode<D>::ChildNodes() const
{
    Windows::Data::Xml::Dom::XmlNodeList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_ChildNodes(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::FirstChild() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_FirstChild(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::LastChild() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_LastChild(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::PreviousSibling() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_PreviousSibling(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::NextSibling() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_NextSibling(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap consume_Windows_Data_Xml_Dom_IXmlNode<D>::Attributes() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_Attributes(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Data_Xml_Dom_IXmlNode<D>::HasChildNodes() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->HasChildNodes(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Data_Xml_Dom_IXmlNode<D>::OwnerDocument() const
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_OwnerDocument(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::InsertBefore(Windows::Data::Xml::Dom::IXmlNode const& newChild, Windows::Data::Xml::Dom::IXmlNode const& referenceChild) const
{
    Windows::Data::Xml::Dom::IXmlNode insertedChild{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->InsertBefore(get_abi(newChild), get_abi(referenceChild), put_abi(insertedChild)));
    return insertedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::ReplaceChild(Windows::Data::Xml::Dom::IXmlNode const& newChild, Windows::Data::Xml::Dom::IXmlNode const& referenceChild) const
{
    Windows::Data::Xml::Dom::IXmlNode previousChild{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->ReplaceChild(get_abi(newChild), get_abi(referenceChild), put_abi(previousChild)));
    return previousChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::RemoveChild(Windows::Data::Xml::Dom::IXmlNode const& childNode) const
{
    Windows::Data::Xml::Dom::IXmlNode removedChild{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->RemoveChild(get_abi(childNode), put_abi(removedChild)));
    return removedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::AppendChild(Windows::Data::Xml::Dom::IXmlNode const& newChild) const
{
    Windows::Data::Xml::Dom::IXmlNode appendedChild{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->AppendChild(get_abi(newChild), put_abi(appendedChild)));
    return appendedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNode<D>::CloneNode(bool deep) const
{
    Windows::Data::Xml::Dom::IXmlNode newNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->CloneNode(deep, put_abi(newNode)));
    return newNode;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IXmlNode<D>::NamespaceUri() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_NamespaceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IXmlNode<D>::LocalName() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_LocalName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Data_Xml_Dom_IXmlNode<D>::Prefix() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->get_Prefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlNode<D>::Normalize() const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->Normalize());
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlNode<D>::Prefix(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNode)->put_Prefix(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Data_Xml_Dom_IXmlNodeList<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeList)->get_Length(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNodeList<D>::Item(uint32_t index) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeList)->Item(index, put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNodeSelector<D>::SelectSingleNode(param::hstring const& xpath) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSelector)->SelectSingleNode(get_abi(xpath), put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList consume_Windows_Data_Xml_Dom_IXmlNodeSelector<D>::SelectNodes(param::hstring const& xpath) const
{
    Windows::Data::Xml::Dom::XmlNodeList nodelist{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSelector)->SelectNodes(get_abi(xpath), put_abi(nodelist)));
    return nodelist;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Data_Xml_Dom_IXmlNodeSelector<D>::SelectSingleNodeNS(param::hstring const& xpath, Windows::Foundation::IInspectable const& namespaces) const
{
    Windows::Data::Xml::Dom::IXmlNode node{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSelector)->SelectSingleNodeNS(get_abi(xpath), get_abi(namespaces), put_abi(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList consume_Windows_Data_Xml_Dom_IXmlNodeSelector<D>::SelectNodesNS(param::hstring const& xpath, Windows::Foundation::IInspectable const& namespaces) const
{
    Windows::Data::Xml::Dom::XmlNodeList nodelist{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSelector)->SelectNodesNS(get_abi(xpath), get_abi(namespaces), put_abi(nodelist)));
    return nodelist;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<D>::GetXml() const
{
    hstring outerXml{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSerializer)->GetXml(put_abi(outerXml)));
    return outerXml;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<D>::InnerText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSerializer)->get_InnerText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<D>::InnerText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlNodeSerializer)->put_InnerText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlProcessingInstruction<D>::Target() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlProcessingInstruction)->get_Target(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Xml_Dom_IXmlProcessingInstruction<D>::Data() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlProcessingInstruction)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Xml_Dom_IXmlProcessingInstruction<D>::Data(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlProcessingInstruction)->put_Data(get_abi(value)));
}

template <typename D> Windows::Data::Xml::Dom::IXmlText consume_Windows_Data_Xml_Dom_IXmlText<D>::SplitText(uint32_t offset) const
{
    Windows::Data::Xml::Dom::IXmlText secondPart{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Dom::IXmlText)->SplitText(offset, put_abi(secondPart)));
    return secondPart;
}

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IDtdEntity> : produce_base<D, Windows::Data::Xml::Dom::IDtdEntity>
{
    HRESULT __stdcall get_PublicId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().PublicId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SystemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NotationName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NotationName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IDtdNotation> : produce_base<D, Windows::Data::Xml::Dom::IDtdNotation>
{
    HRESULT __stdcall get_PublicId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().PublicId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SystemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlAttribute> : produce_base<D, Windows::Data::Xml::Dom::IXmlAttribute>
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

    HRESULT __stdcall get_Specified(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Specified());
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
struct produce<D, Windows::Data::Xml::Dom::IXmlCDataSection> : produce_base<D, Windows::Data::Xml::Dom::IXmlCDataSection>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlCharacterData> : produce_base<D, Windows::Data::Xml::Dom::IXmlCharacterData>
{
    HRESULT __stdcall get_Data(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall SubstringData(uint32_t offset, uint32_t count, HSTRING* data) noexcept final
    {
        try
        {
            *data = nullptr;
            typename D::abi_guard guard(this->shim());
            *data = detach_from<hstring>(this->shim().SubstringData(offset, count));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendData(HSTRING data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendData(*reinterpret_cast<hstring const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertData(uint32_t offset, HSTRING data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertData(offset, *reinterpret_cast<hstring const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteData(uint32_t offset, uint32_t count) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteData(offset, count);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReplaceData(uint32_t offset, uint32_t count, HSTRING data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceData(offset, count, *reinterpret_cast<hstring const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlComment> : produce_base<D, Windows::Data::Xml::Dom::IXmlComment>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocument> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocument>
{
    HRESULT __stdcall get_Doctype(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlDocumentType>(this->shim().Doctype());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Implementation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlDomImplementation>(this->shim().Implementation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlElement>(this->shim().DocumentElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateElement(HSTRING tagName, void** newElement) noexcept final
    {
        try
        {
            *newElement = nullptr;
            typename D::abi_guard guard(this->shim());
            *newElement = detach_from<Windows::Data::Xml::Dom::XmlElement>(this->shim().CreateElement(*reinterpret_cast<hstring const*>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDocumentFragment(void** newDocumentFragment) noexcept final
    {
        try
        {
            *newDocumentFragment = nullptr;
            typename D::abi_guard guard(this->shim());
            *newDocumentFragment = detach_from<Windows::Data::Xml::Dom::XmlDocumentFragment>(this->shim().CreateDocumentFragment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateTextNode(HSTRING data, void** newTextNode) noexcept final
    {
        try
        {
            *newTextNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *newTextNode = detach_from<Windows::Data::Xml::Dom::XmlText>(this->shim().CreateTextNode(*reinterpret_cast<hstring const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateComment(HSTRING data, void** newComment) noexcept final
    {
        try
        {
            *newComment = nullptr;
            typename D::abi_guard guard(this->shim());
            *newComment = detach_from<Windows::Data::Xml::Dom::XmlComment>(this->shim().CreateComment(*reinterpret_cast<hstring const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateProcessingInstruction(HSTRING target, HSTRING data, void** newProcessingInstruction) noexcept final
    {
        try
        {
            *newProcessingInstruction = nullptr;
            typename D::abi_guard guard(this->shim());
            *newProcessingInstruction = detach_from<Windows::Data::Xml::Dom::XmlProcessingInstruction>(this->shim().CreateProcessingInstruction(*reinterpret_cast<hstring const*>(&target), *reinterpret_cast<hstring const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAttribute(HSTRING name, void** newAttribute) noexcept final
    {
        try
        {
            *newAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *newAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().CreateAttribute(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEntityReference(HSTRING name, void** newEntityReference) noexcept final
    {
        try
        {
            *newEntityReference = nullptr;
            typename D::abi_guard guard(this->shim());
            *newEntityReference = detach_from<Windows::Data::Xml::Dom::XmlEntityReference>(this->shim().CreateEntityReference(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetElementsByTagName(HSTRING tagName, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Data::Xml::Dom::XmlNodeList>(this->shim().GetElementsByTagName(*reinterpret_cast<hstring const*>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCDataSection(HSTRING data, void** newCDataSection) noexcept final
    {
        try
        {
            *newCDataSection = nullptr;
            typename D::abi_guard guard(this->shim());
            *newCDataSection = detach_from<Windows::Data::Xml::Dom::XmlCDataSection>(this->shim().CreateCDataSection(*reinterpret_cast<hstring const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentUri(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DocumentUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAttributeNS(void* namespaceUri, HSTRING qualifiedName, void** newAttribute) noexcept final
    {
        try
        {
            *newAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *newAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().CreateAttributeNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&qualifiedName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateElementNS(void* namespaceUri, HSTRING qualifiedName, void** newElement) noexcept final
    {
        try
        {
            *newElement = nullptr;
            typename D::abi_guard guard(this->shim());
            *newElement = detach_from<Windows::Data::Xml::Dom::XmlElement>(this->shim().CreateElementNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&qualifiedName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetElementById(HSTRING elementId, void** element) noexcept final
    {
        try
        {
            *element = nullptr;
            typename D::abi_guard guard(this->shim());
            *element = detach_from<Windows::Data::Xml::Dom::XmlElement>(this->shim().GetElementById(*reinterpret_cast<hstring const*>(&elementId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ImportNode(void* node, bool deep, void** newNode) noexcept final
    {
        try
        {
            *newNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *newNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().ImportNode(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&node), deep));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentFragment> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentFragment>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentIO> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentIO>
{
    HRESULT __stdcall LoadXml(HSTRING xml) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadXml(*reinterpret_cast<hstring const*>(&xml));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadXmlWithSettings(HSTRING xml, void* loadSettings) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadXml(*reinterpret_cast<hstring const*>(&xml), *reinterpret_cast<Windows::Data::Xml::Dom::XmlLoadSettings const*>(&loadSettings));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveToFileAsync(void* file, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentIO2> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentIO2>
{
    HRESULT __stdcall LoadXmlFromBuffer(void* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadXmlFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadXmlFromBufferWithSettings(void* buffer, void* loadSettings) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadXmlFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), *reinterpret_cast<Windows::Data::Xml::Dom::XmlLoadSettings const*>(&loadSettings));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentStatics> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentStatics>
{
    HRESULT __stdcall LoadFromUriAsync(void* uri, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>>(this->shim().LoadFromUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadFromUriWithSettingsAsync(void* uri, void* loadSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>>(this->shim().LoadFromUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Data::Xml::Dom::XmlLoadSettings const*>(&loadSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadFromFileAsync(void* file, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>>(this->shim().LoadFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadFromFileWithSettingsAsync(void* file, void* loadSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>>(this->shim().LoadFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Data::Xml::Dom::XmlLoadSettings const*>(&loadSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentType> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentType>
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

    HRESULT __stdcall get_Entities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlNamedNodeMap>(this->shim().Entities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Notations(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlNamedNodeMap>(this->shim().Notations());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDomImplementation> : produce_base<D, Windows::Data::Xml::Dom::IXmlDomImplementation>
{
    HRESULT __stdcall HasFeature(HSTRING feature, void* version, bool* featureSupported) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *featureSupported = detach_from<bool>(this->shim().HasFeature(*reinterpret_cast<hstring const*>(&feature), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&version)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlElement> : produce_base<D, Windows::Data::Xml::Dom::IXmlElement>
{
    HRESULT __stdcall get_TagName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TagName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAttribute(HSTRING attributeName, HSTRING* attributeValue) noexcept final
    {
        try
        {
            *attributeValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *attributeValue = detach_from<hstring>(this->shim().GetAttribute(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAttribute(HSTRING attributeName, HSTRING attributeValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAttribute(*reinterpret_cast<hstring const*>(&attributeName), *reinterpret_cast<hstring const*>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAttribute(HSTRING attributeName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAttribute(*reinterpret_cast<hstring const*>(&attributeName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAttributeNode(HSTRING attributeName, void** attributeNode) noexcept final
    {
        try
        {
            *attributeNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *attributeNode = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().GetAttributeNode(*reinterpret_cast<hstring const*>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAttributeNode(void* newAttribute, void** previousAttribute) noexcept final
    {
        try
        {
            *previousAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().SetAttributeNode(*reinterpret_cast<Windows::Data::Xml::Dom::XmlAttribute const*>(&newAttribute)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAttributeNode(void* attributeNode, void** removedAttribute) noexcept final
    {
        try
        {
            *removedAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *removedAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().RemoveAttributeNode(*reinterpret_cast<Windows::Data::Xml::Dom::XmlAttribute const*>(&attributeNode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetElementsByTagName(HSTRING tagName, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Data::Xml::Dom::XmlNodeList>(this->shim().GetElementsByTagName(*reinterpret_cast<hstring const*>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAttributeNS(void* namespaceUri, HSTRING qualifiedName, HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAttributeNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&qualifiedName), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAttributeNS(void* namespaceUri, HSTRING localName, HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetAttributeNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&localName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAttributeNS(void* namespaceUri, HSTRING localName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAttributeNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&localName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAttributeNodeNS(void* newAttribute, void** previousAttribute) noexcept final
    {
        try
        {
            *previousAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().SetAttributeNodeNS(*reinterpret_cast<Windows::Data::Xml::Dom::XmlAttribute const*>(&newAttribute)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAttributeNodeNS(void* namespaceUri, HSTRING localName, void** previousAttribute) noexcept final
    {
        try
        {
            *previousAttribute = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousAttribute = detach_from<Windows::Data::Xml::Dom::XmlAttribute>(this->shim().GetAttributeNodeNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&localName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlEntityReference> : produce_base<D, Windows::Data::Xml::Dom::IXmlEntityReference>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlLoadSettings> : produce_base<D, Windows::Data::Xml::Dom::IXmlLoadSettings>
{
    HRESULT __stdcall get_MaxElementDepth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxElementDepth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxElementDepth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxElementDepth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProhibitDtd(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ProhibitDtd());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProhibitDtd(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProhibitDtd(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResolveExternals(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ResolveExternals());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ResolveExternals(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResolveExternals(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ValidateOnParse(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ValidateOnParse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ValidateOnParse(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValidateOnParse(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ElementContentWhiteSpace(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ElementContentWhiteSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ElementContentWhiteSpace(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ElementContentWhiteSpace(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNamedNodeMap> : produce_base<D, Windows::Data::Xml::Dom::IXmlNamedNodeMap>
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

    HRESULT __stdcall Item(uint32_t index, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().Item(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNamedItem(HSTRING name, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().GetNamedItem(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetNamedItem(void* node, void** previousNode) noexcept final
    {
        try
        {
            *previousNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().SetNamedItem(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&node)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveNamedItem(HSTRING name, void** previousNode) noexcept final
    {
        try
        {
            *previousNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().RemoveNamedItem(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNamedItemNS(void* namespaceUri, HSTRING name, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().GetNamedItemNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveNamedItemNS(void* namespaceUri, HSTRING name, void** previousNode) noexcept final
    {
        try
        {
            *previousNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().RemoveNamedItemNS(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaceUri), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetNamedItemNS(void* node, void** previousNode) noexcept final
    {
        try
        {
            *previousNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().SetNamedItemNS(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&node)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNode> : produce_base<D, Windows::Data::Xml::Dom::IXmlNode>
{
    HRESULT __stdcall get_NodeValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NodeValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NodeValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NodeValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NodeType(Windows::Data::Xml::Dom::NodeType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::NodeType>(this->shim().NodeType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall get_ParentNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().ParentNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChildNodes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlNodeList>(this->shim().ChildNodes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FirstChild(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().FirstChild());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastChild(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().LastChild());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousSibling(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().PreviousSibling());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NextSibling(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().NextSibling());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Attributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlNamedNodeMap>(this->shim().Attributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall HasChildNodes(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasChildNodes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OwnerDocument(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::XmlDocument>(this->shim().OwnerDocument());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertBefore(void* newChild, void* referenceChild, void** insertedChild) noexcept final
    {
        try
        {
            *insertedChild = nullptr;
            typename D::abi_guard guard(this->shim());
            *insertedChild = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().InsertBefore(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&newChild), *reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&referenceChild)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReplaceChild(void* newChild, void* referenceChild, void** previousChild) noexcept final
    {
        try
        {
            *previousChild = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousChild = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().ReplaceChild(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&newChild), *reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&referenceChild)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveChild(void* childNode, void** removedChild) noexcept final
    {
        try
        {
            *removedChild = nullptr;
            typename D::abi_guard guard(this->shim());
            *removedChild = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().RemoveChild(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&childNode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendChild(void* newChild, void** appendedChild) noexcept final
    {
        try
        {
            *appendedChild = nullptr;
            typename D::abi_guard guard(this->shim());
            *appendedChild = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().AppendChild(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&newChild)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CloneNode(bool deep, void** newNode) noexcept final
    {
        try
        {
            *newNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *newNode = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().CloneNode(deep));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NamespaceUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NamespaceUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().LocalName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Prefix(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Prefix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Normalize() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Normalize();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Prefix(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Prefix(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeList> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeList>
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

    HRESULT __stdcall Item(uint32_t index, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().Item(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeSelector> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeSelector>
{
    HRESULT __stdcall SelectSingleNode(HSTRING xpath, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().SelectSingleNode(*reinterpret_cast<hstring const*>(&xpath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectNodes(HSTRING xpath, void** nodelist) noexcept final
    {
        try
        {
            *nodelist = nullptr;
            typename D::abi_guard guard(this->shim());
            *nodelist = detach_from<Windows::Data::Xml::Dom::XmlNodeList>(this->shim().SelectNodes(*reinterpret_cast<hstring const*>(&xpath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectSingleNodeNS(HSTRING xpath, void* namespaces, void** node) noexcept final
    {
        try
        {
            *node = nullptr;
            typename D::abi_guard guard(this->shim());
            *node = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().SelectSingleNodeNS(*reinterpret_cast<hstring const*>(&xpath), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaces)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectNodesNS(HSTRING xpath, void* namespaces, void** nodelist) noexcept final
    {
        try
        {
            *nodelist = nullptr;
            typename D::abi_guard guard(this->shim());
            *nodelist = detach_from<Windows::Data::Xml::Dom::XmlNodeList>(this->shim().SelectNodesNS(*reinterpret_cast<hstring const*>(&xpath), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&namespaces)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeSerializer> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    HRESULT __stdcall GetXml(HSTRING* outerXml) noexcept final
    {
        try
        {
            *outerXml = nullptr;
            typename D::abi_guard guard(this->shim());
            *outerXml = detach_from<hstring>(this->shim().GetXml());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InnerText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InnerText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InnerText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlProcessingInstruction> : produce_base<D, Windows::Data::Xml::Dom::IXmlProcessingInstruction>
{
    HRESULT __stdcall get_Target(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlText> : produce_base<D, Windows::Data::Xml::Dom::IXmlText>
{
    HRESULT __stdcall SplitText(uint32_t offset, void** secondPart) noexcept final
    {
        try
        {
            *secondPart = nullptr;
            typename D::abi_guard guard(this->shim());
            *secondPart = detach_from<Windows::Data::Xml::Dom::IXmlText>(this->shim().SplitText(offset));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

inline XmlDocument::XmlDocument() :
    XmlDocument(get_activation_factory<XmlDocument>().ActivateInstance<XmlDocument>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromUriAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentStatics>().LoadFromUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings)
{
    return get_activation_factory<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentStatics>().LoadFromUriAsync(uri, loadSettings);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentStatics>().LoadFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromFileAsync(Windows::Storage::IStorageFile const& file, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings)
{
    return get_activation_factory<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentStatics>().LoadFromFileAsync(file, loadSettings);
}

inline XmlLoadSettings::XmlLoadSettings() :
    XmlLoadSettings(get_activation_factory<XmlLoadSettings>().ActivateInstance<XmlLoadSettings>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Xml::Dom::IDtdEntity> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IDtdEntity> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IDtdNotation> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IDtdNotation> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlAttribute> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlAttribute> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlCDataSection> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlCDataSection> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlCharacterData> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlCharacterData> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlComment> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlComment> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocument> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocument> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocumentFragment> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocumentFragment> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocumentIO> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocumentIO> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocumentIO2> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocumentIO2> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocumentStatics> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocumentStatics> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDocumentType> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDocumentType> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlDomImplementation> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlDomImplementation> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlElement> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlElement> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlEntityReference> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlEntityReference> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlLoadSettings> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlLoadSettings> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlNamedNodeMap> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlNamedNodeMap> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlNode> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlNode> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlNodeList> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlNodeList> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlNodeSelector> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlNodeSelector> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlNodeSerializer> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlNodeSerializer> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlProcessingInstruction> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlProcessingInstruction> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::IXmlText> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::IXmlText> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::DtdEntity> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::DtdEntity> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::DtdNotation> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::DtdNotation> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlAttribute> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlAttribute> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlCDataSection> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlCDataSection> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlComment> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlComment> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlDocument> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlDocument> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlDocumentFragment> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlDocumentFragment> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlDocumentType> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlDocumentType> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlDomImplementation> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlDomImplementation> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlElement> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlElement> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlEntityReference> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlEntityReference> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlLoadSettings> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlLoadSettings> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlNamedNodeMap> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlNamedNodeMap> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlNodeList> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlNodeList> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlProcessingInstruction> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlProcessingInstruction> {};
template<> struct hash<winrt::Windows::Data::Xml::Dom::XmlText> : winrt::impl::hash_base<winrt::Windows::Data::Xml::Dom::XmlText> {};

}

WINRT_WARNING_POP
