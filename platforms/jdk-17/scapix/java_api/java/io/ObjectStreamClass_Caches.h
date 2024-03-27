// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectStreamClass_Caches; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectStreamClass_Caches>
{
	static constexpr fixed_string class_name = "java/io/ObjectStreamClass$Caches";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectStreamClass_Caches : public jni::object_base<"java/io/ObjectStreamClass$Caches",
	java::lang::Object>
{
public:


protected:

	ObjectStreamClass_Caches(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_CACHES
