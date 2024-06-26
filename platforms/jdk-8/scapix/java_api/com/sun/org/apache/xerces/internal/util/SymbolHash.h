// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class SymbolHash; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::SymbolHash>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/SymbolHash";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::SymbolHash : public jni::object_base<"com/sun/org/apache/xerces/internal/util/SymbolHash",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::SymbolHash> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::SymbolHash> new_object(jint p1) { return base_::new_object(p1); }
	void put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jint getValues(jni::ref<jni::array<java::lang::Object>> p1, jint p2) { return call_method<"getValues", jint>(p1, p2); }
	jni::ref<jni::array<java::lang::Object>> getEntries() { return call_method<"getEntries", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::util::SymbolHash> makeClone() { return call_method<"makeClone", jni::ref<com::sun::org::apache::xerces::internal::util::SymbolHash>>(); }
	void clear() { return call_method<"clear", void>(); }

protected:

	SymbolHash(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLHASH
