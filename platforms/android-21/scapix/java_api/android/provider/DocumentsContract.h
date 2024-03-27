// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class DocumentsContract; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::DocumentsContract>
{
	static constexpr fixed_string class_name = "android/provider/DocumentsContract";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/DocumentsContract_Root.h>
#include <scapix/java_api/android/provider/DocumentsContract_Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::DocumentsContract : public jni::object_base<"android/provider/DocumentsContract",
	java::lang::Object>
{
public:

	using Root = DocumentsContract_Root;
	using Document = DocumentsContract_Document;

	static jni::ref<java::lang::String> EXTRA_ERROR() { return get_static_field<"EXTRA_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_INFO() { return get_static_field<"EXTRA_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LOADING() { return get_static_field<"EXTRA_LOADING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROVIDER_INTERFACE() { return get_static_field<"PROVIDER_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::Uri> buildRootsUri(jni::ref<java::lang::String> authority) { return call_static_method<"buildRootsUri", jni::ref<android::net::Uri>>(authority); }
	static jni::ref<android::net::Uri> buildRootUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> rootId) { return call_static_method<"buildRootUri", jni::ref<android::net::Uri>>(authority, rootId); }
	static jni::ref<android::net::Uri> buildRecentDocumentsUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> rootId) { return call_static_method<"buildRecentDocumentsUri", jni::ref<android::net::Uri>>(authority, rootId); }
	static jni::ref<android::net::Uri> buildTreeDocumentUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> documentId) { return call_static_method<"buildTreeDocumentUri", jni::ref<android::net::Uri>>(authority, documentId); }
	static jni::ref<android::net::Uri> buildDocumentUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> documentId) { return call_static_method<"buildDocumentUri", jni::ref<android::net::Uri>>(authority, documentId); }
	static jni::ref<android::net::Uri> buildDocumentUriUsingTree(jni::ref<android::net::Uri> treeUri, jni::ref<java::lang::String> documentId) { return call_static_method<"buildDocumentUriUsingTree", jni::ref<android::net::Uri>>(treeUri, documentId); }
	static jni::ref<android::net::Uri> buildChildDocumentsUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> parentDocumentId) { return call_static_method<"buildChildDocumentsUri", jni::ref<android::net::Uri>>(authority, parentDocumentId); }
	static jni::ref<android::net::Uri> buildChildDocumentsUriUsingTree(jni::ref<android::net::Uri> treeUri, jni::ref<java::lang::String> parentDocumentId) { return call_static_method<"buildChildDocumentsUriUsingTree", jni::ref<android::net::Uri>>(treeUri, parentDocumentId); }
	static jni::ref<android::net::Uri> buildSearchDocumentsUri(jni::ref<java::lang::String> authority, jni::ref<java::lang::String> rootId, jni::ref<java::lang::String> query) { return call_static_method<"buildSearchDocumentsUri", jni::ref<android::net::Uri>>(authority, rootId, query); }
	static jboolean isDocumentUri(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri) { return call_static_method<"isDocumentUri", jboolean>(context, uri); }
	static jni::ref<java::lang::String> getRootId(jni::ref<android::net::Uri> rootUri) { return call_static_method<"getRootId", jni::ref<java::lang::String>>(rootUri); }
	static jni::ref<java::lang::String> getDocumentId(jni::ref<android::net::Uri> documentUri) { return call_static_method<"getDocumentId", jni::ref<java::lang::String>>(documentUri); }
	static jni::ref<java::lang::String> getTreeDocumentId(jni::ref<android::net::Uri> documentUri) { return call_static_method<"getTreeDocumentId", jni::ref<java::lang::String>>(documentUri); }
	static jni::ref<java::lang::String> getSearchDocumentsQuery(jni::ref<android::net::Uri> searchDocumentsUri) { return call_static_method<"getSearchDocumentsQuery", jni::ref<java::lang::String>>(searchDocumentsUri); }
	static jni::ref<android::graphics::Bitmap> getDocumentThumbnail(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> documentUri, jni::ref<android::graphics::Point> size, jni::ref<android::os::CancellationSignal> signal) { return call_static_method<"getDocumentThumbnail", jni::ref<android::graphics::Bitmap>>(resolver, documentUri, size, signal); }
	static jni::ref<android::net::Uri> createDocument(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> parentDocumentUri, jni::ref<java::lang::String> mimeType, jni::ref<java::lang::String> displayName) { return call_static_method<"createDocument", jni::ref<android::net::Uri>>(resolver, parentDocumentUri, mimeType, displayName); }
	static jni::ref<android::net::Uri> renameDocument(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> documentUri, jni::ref<java::lang::String> displayName) { return call_static_method<"renameDocument", jni::ref<android::net::Uri>>(resolver, documentUri, displayName); }
	static jboolean deleteDocument(jni::ref<android::content::ContentResolver> resolver, jni::ref<android::net::Uri> documentUri) { return call_static_method<"deleteDocument", jboolean>(resolver, documentUri); }

protected:

	DocumentsContract(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSCONTRACT
