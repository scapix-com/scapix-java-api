// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class JDKClassLoader_JDKClassLoaderCache_CacheKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::JDKClassLoader_JDKClassLoaderCache_CacheKey>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/JDKClassLoader$JDKClassLoaderCache$CacheKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::util::JDKClassLoader_JDKClassLoaderCache_CacheKey : public jni::object_base<"com/sun/corba/se/impl/util/JDKClassLoader$JDKClassLoaderCache$CacheKey",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::util::JDKClassLoader_JDKClassLoaderCache_CacheKey> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::ClassLoader> p2) { return base_::new_object(p1, p2); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	JDKClassLoader_JDKClassLoaderCache_CacheKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKCLASSLOADER_JDKCLASSLOADERCACHE_CACHEKEY