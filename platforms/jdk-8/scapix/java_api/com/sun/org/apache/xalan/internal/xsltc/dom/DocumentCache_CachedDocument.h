// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class DocumentCache_CachedDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache_CachedDocument>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache_CachedDocument : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/DocumentCache$CachedDocument",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache_CachedDocument> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::DocumentCache> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void loadDocument(jni::ref<java::lang::String> p1) { return call_method<"loadDocument", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> getDocument() { return call_method<"getDocument", jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM>>(); }
	jlong getFirstReferenced() { return call_method<"getFirstReferenced", jlong>(); }
	jlong getLastReferenced() { return call_method<"getLastReferenced", jlong>(); }
	jlong getAccessCount() { return call_method<"getAccessCount", jlong>(); }
	void incAccessCount() { return call_method<"incAccessCount", void>(); }
	jlong getLastModified() { return call_method<"getLastModified", jlong>(); }
	void setLastModified(jlong p1) { return call_method<"setLastModified", void>(p1); }
	jlong getLatency() { return call_method<"getLatency", jlong>(); }
	jlong getLastChecked() { return call_method<"getLastChecked", jlong>(); }
	void setLastChecked(jlong p1) { return call_method<"setLastChecked", void>(p1); }
	jlong getEstimatedSize() { return call_method<"getEstimatedSize", jlong>(); }

protected:

	DocumentCache_CachedDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOCUMENTCACHE_CACHEDDOCUMENT