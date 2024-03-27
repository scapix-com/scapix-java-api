// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/ContentProvider.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class DocumentsProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::DocumentsProvider>
{
	static constexpr fixed_string class_name = "android/provider/DocumentsProvider";
	using base_classes = std::tuple<scapix::java_api::android::content::ContentProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/provider/DocumentsContract_Path.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::DocumentsProvider : public jni::object_base<"android/provider/DocumentsProvider",
	android::content::ContentProvider>
{
public:

	static jni::ref<android::provider::DocumentsProvider> new_object() { return base_::new_object(); }
	void attachInfo(jni::ref<android::content::Context> context, jni::ref<android::content::pm::ProviderInfo> info) { return call_method<"attachInfo", void>(context, info); }
	jboolean isChildDocument(jni::ref<java::lang::String> parentDocumentId, jni::ref<java::lang::String> documentId) { return call_method<"isChildDocument", jboolean>(parentDocumentId, documentId); }
	jni::ref<java::lang::String> createDocument(jni::ref<java::lang::String> parentDocumentId, jni::ref<java::lang::String> mimeType, jni::ref<java::lang::String> displayName) { return call_method<"createDocument", jni::ref<java::lang::String>>(parentDocumentId, mimeType, displayName); }
	jni::ref<java::lang::String> renameDocument(jni::ref<java::lang::String> documentId, jni::ref<java::lang::String> displayName) { return call_method<"renameDocument", jni::ref<java::lang::String>>(documentId, displayName); }
	void deleteDocument(jni::ref<java::lang::String> documentId) { return call_method<"deleteDocument", void>(documentId); }
	jni::ref<java::lang::String> copyDocument(jni::ref<java::lang::String> sourceDocumentId, jni::ref<java::lang::String> targetParentDocumentId) { return call_method<"copyDocument", jni::ref<java::lang::String>>(sourceDocumentId, targetParentDocumentId); }
	jni::ref<java::lang::String> moveDocument(jni::ref<java::lang::String> sourceDocumentId, jni::ref<java::lang::String> sourceParentDocumentId, jni::ref<java::lang::String> targetParentDocumentId) { return call_method<"moveDocument", jni::ref<java::lang::String>>(sourceDocumentId, sourceParentDocumentId, targetParentDocumentId); }
	void removeDocument(jni::ref<java::lang::String> documentId, jni::ref<java::lang::String> parentDocumentId) { return call_method<"removeDocument", void>(documentId, parentDocumentId); }
	jni::ref<android::provider::DocumentsContract_Path> findDocumentPath(jni::ref<java::lang::String> parentDocumentId, jni::ref<java::lang::String> childDocumentId) { return call_method<"findDocumentPath", jni::ref<android::provider::DocumentsContract_Path>>(parentDocumentId, childDocumentId); }
	jni::ref<android::content::IntentSender> createWebLinkIntent(jni::ref<java::lang::String> documentId, jni::ref<android::os::Bundle> options) { return call_method<"createWebLinkIntent", jni::ref<android::content::IntentSender>>(documentId, options); }
	jni::ref<android::database::Cursor> queryRoots(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"queryRoots", jni::ref<android::database::Cursor>>(p1); }
	jni::ref<android::database::Cursor> queryRecentDocuments(jni::ref<java::lang::String> rootId, jni::ref<jni::array<java::lang::String>> projection) { return call_method<"queryRecentDocuments", jni::ref<android::database::Cursor>>(rootId, projection); }
	jni::ref<android::database::Cursor> queryRecentDocuments(jni::ref<java::lang::String> rootId, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs, jni::ref<android::os::CancellationSignal> signal) { return call_method<"queryRecentDocuments", jni::ref<android::database::Cursor>>(rootId, projection, queryArgs, signal); }
	jni::ref<android::database::Cursor> queryDocument(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"queryDocument", jni::ref<android::database::Cursor>>(p1, p2); }
	jni::ref<android::database::Cursor> queryChildDocuments(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::lang::String> p3) { return call_method<"queryChildDocuments", jni::ref<android::database::Cursor>>(p1, p2, p3); }
	jni::ref<android::database::Cursor> queryChildDocuments(jni::ref<java::lang::String> parentDocumentId, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs) { return call_method<"queryChildDocuments", jni::ref<android::database::Cursor>>(parentDocumentId, projection, queryArgs); }
	jni::ref<android::database::Cursor> querySearchDocuments(jni::ref<java::lang::String> rootId, jni::ref<java::lang::String> query, jni::ref<jni::array<java::lang::String>> projection) { return call_method<"querySearchDocuments", jni::ref<android::database::Cursor>>(rootId, query, projection); }
	jni::ref<android::database::Cursor> querySearchDocuments(jni::ref<java::lang::String> rootId, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs) { return call_method<"querySearchDocuments", jni::ref<android::database::Cursor>>(rootId, projection, queryArgs); }
	void ejectRoot(jni::ref<java::lang::String> rootId) { return call_method<"ejectRoot", void>(rootId); }
	jni::ref<android::os::Bundle> getDocumentMetadata(jni::ref<java::lang::String> documentId) { return call_method<"getDocumentMetadata", jni::ref<android::os::Bundle>>(documentId); }
	jni::ref<java::lang::String> getDocumentType(jni::ref<java::lang::String> documentId) { return call_method<"getDocumentType", jni::ref<java::lang::String>>(documentId); }
	jni::ref<android::os::ParcelFileDescriptor> openDocument(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<android::os::CancellationSignal> p3) { return call_method<"openDocument", jni::ref<android::os::ParcelFileDescriptor>>(p1, p2, p3); }
	jni::ref<android::content::res::AssetFileDescriptor> openDocumentThumbnail(jni::ref<java::lang::String> documentId, jni::ref<android::graphics::Point> sizeHint, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openDocumentThumbnail", jni::ref<android::content::res::AssetFileDescriptor>>(documentId, sizeHint, signal); }
	jni::ref<android::content::res::AssetFileDescriptor> openTypedDocument(jni::ref<java::lang::String> documentId, jni::ref<java::lang::String> mimeTypeFilter, jni::ref<android::os::Bundle> opts, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openTypedDocument", jni::ref<android::content::res::AssetFileDescriptor>>(documentId, mimeTypeFilter, opts, signal); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder, cancellationSignal); }
	jni::ref<android::database::Cursor> query(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<android::os::Bundle> queryArgs, jni::ref<android::os::CancellationSignal> cancellationSignal) { return call_method<"query", jni::ref<android::database::Cursor>>(uri, projection, queryArgs, cancellationSignal); }
	jni::ref<java::lang::String> getType(jni::ref<android::net::Uri> uri) { return call_method<"getType", jni::ref<java::lang::String>>(uri); }
	jni::ref<java::lang::String> getTypeAnonymous(jni::ref<android::net::Uri> uri) { return call_method<"getTypeAnonymous", jni::ref<java::lang::String>>(uri); }
	jni::ref<android::net::Uri> canonicalize(jni::ref<android::net::Uri> uri) { return call_method<"canonicalize", jni::ref<android::net::Uri>>(uri); }
	jni::ref<android::net::Uri> insert(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values) { return call_method<"insert", jni::ref<android::net::Uri>>(uri, values); }
	jint delete_(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"delete", jint>(uri, selection, selectionArgs); }
	jint update(jni::ref<android::net::Uri> uri, jni::ref<android::content::ContentValues> values, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs) { return call_method<"update", jint>(uri, values, selection, selectionArgs); }
	jni::ref<android::os::Bundle> call(jni::ref<java::lang::String> method, jni::ref<java::lang::String> arg, jni::ref<android::os::Bundle> extras) { return call_method<"call", jni::ref<android::os::Bundle>>(method, arg, extras); }
	void revokeDocumentPermission(jni::ref<java::lang::String> documentId) { return call_method<"revokeDocumentPermission", void>(documentId); }
	jni::ref<android::os::ParcelFileDescriptor> openFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode) { return call_method<"openFile", jni::ref<android::os::ParcelFileDescriptor>>(uri, mode); }
	jni::ref<android::os::ParcelFileDescriptor> openFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openFile", jni::ref<android::os::ParcelFileDescriptor>>(uri, mode, signal); }
	jni::ref<android::content::res::AssetFileDescriptor> openAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode) { return call_method<"openAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mode); }
	jni::ref<android::content::res::AssetFileDescriptor> openAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mode, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mode, signal); }
	jni::ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter, jni::ref<android::os::Bundle> opts) { return call_method<"openTypedAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts); }
	jni::ref<android::content::res::AssetFileDescriptor> openTypedAssetFile(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter, jni::ref<android::os::Bundle> opts, jni::ref<android::os::CancellationSignal> signal) { return call_method<"openTypedAssetFile", jni::ref<android::content::res::AssetFileDescriptor>>(uri, mimeTypeFilter, opts, signal); }
	jni::ref<jni::array<java::lang::String>> getDocumentStreamTypes(jni::ref<java::lang::String> documentId, jni::ref<java::lang::String> mimeTypeFilter) { return call_method<"getDocumentStreamTypes", jni::ref<jni::array<java::lang::String>>>(documentId, mimeTypeFilter); }
	jni::ref<jni::array<java::lang::String>> getStreamTypes(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeTypeFilter) { return call_method<"getStreamTypes", jni::ref<jni::array<java::lang::String>>>(uri, mimeTypeFilter); }

protected:

	DocumentsProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_DOCUMENTSPROVIDER
