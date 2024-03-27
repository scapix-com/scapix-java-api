// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class SymbolTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::SymbolTable>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/SymbolTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::SymbolTable : public jni::object_base<"com/sun/org/apache/xerces/internal/util/SymbolTable",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> new_object(jint p1, jfloat p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> addSymbol(jni::ref<java::lang::String> p1) { return call_method<"addSymbol", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> addSymbol(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"addSymbol", jni::ref<java::lang::String>>(p1, p2, p3); }
	jint hash(jni::ref<java::lang::String> p1) { return call_method<"hash", jint>(p1); }
	jint hash(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"hash", jint>(p1, p2, p3); }
	jboolean containsSymbol(jni::ref<java::lang::String> p1) { return call_method<"containsSymbol", jboolean>(p1); }
	jboolean containsSymbol(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"containsSymbol", jboolean>(p1, p2, p3); }

protected:

	SymbolTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_SYMBOLTABLE
