// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleReferenceImpl_CachedHash; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleReferenceImpl_CachedHash>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleReferenceImpl$CachedHash";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModuleReferenceImpl_CachedHash : public jni::object_base<"jdk/internal/module/ModuleReferenceImpl$CachedHash",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jni::array<jbyte>> hash() { return call_method<"hash", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> algorithm() { return call_method<"algorithm", jni::ref<java::lang::String>>(); }

protected:

	ModuleReferenceImpl_CachedHash(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEREFERENCEIMPL_CACHEDHASH