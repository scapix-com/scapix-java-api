// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>
#include <scapix/java_api/java/util/ResourceBundle_CacheKeyReference.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle_LoaderReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle_LoaderReference>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle$LoaderReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference, scapix::java_api::java::util::ResourceBundle_CacheKeyReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/ResourceBundle_CacheKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ResourceBundle_LoaderReference : public jni::object_base<"java/util/ResourceBundle$LoaderReference",
	java::lang::ref::WeakReference,
	java::util::ResourceBundle_CacheKeyReference>
{
public:

	jni::ref<java::util::ResourceBundle_CacheKey> getCacheKey() { return call_method<"getCacheKey", jni::ref<java::util::ResourceBundle_CacheKey>>(); }

protected:

	ResourceBundle_LoaderReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_LOADERREFERENCE
