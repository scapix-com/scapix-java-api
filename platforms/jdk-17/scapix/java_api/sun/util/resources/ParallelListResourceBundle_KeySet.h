// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class ParallelListResourceBundle_KeySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::ParallelListResourceBundle_KeySet>
{
	static constexpr fixed_string class_name = "sun/util/resources/ParallelListResourceBundle$KeySet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::resources::ParallelListResourceBundle_KeySet : public jni::object_base<"sun/util/resources/ParallelListResourceBundle$KeySet",
	java::util::AbstractSet>
{
public:

	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint size() { return call_method<"size", jint>(); }

protected:

	ParallelListResourceBundle_KeySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_PARALLELLISTRESOURCEBUNDLE_KEYSET
