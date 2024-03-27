// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ImmutableCollections_AbstractImmutableList.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ImmutableCollections_List12; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ImmutableCollections_List12>
{
	static constexpr fixed_string class_name = "java/util/ImmutableCollections$List12";
	using base_classes = std::tuple<scapix::java_api::java::util::ImmutableCollections_AbstractImmutableList, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12)
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ImmutableCollections_List12 : public jni::object_base<"java/util/ImmutableCollections$List12",
	java::util::ImmutableCollections_AbstractImmutableList,
	java::io::Serializable>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::lang::Object> get(jint index) { return call_method<"get", jni::ref<java::lang::Object>>(index); }

protected:

	ImmutableCollections_List12(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_LIST12
