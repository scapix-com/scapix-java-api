// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectStreamClass_DeserializationConstructorsCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectStreamClass_DeserializationConstructorsCache>
{
	static constexpr fixed_string class_name = "java/io/ObjectStreamClass$DeserializationConstructorsCache";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::ConcurrentHashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectStreamClass_DeserializationConstructorsCache : public jni::object_base<"java/io/ObjectStreamClass$DeserializationConstructorsCache",
	java::util::concurrent::ConcurrentHashMap>
{
public:


protected:

	ObjectStreamClass_DeserializationConstructorsCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE
