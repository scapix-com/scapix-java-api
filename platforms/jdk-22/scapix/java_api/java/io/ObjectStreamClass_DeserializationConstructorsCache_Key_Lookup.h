// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectStreamClass_DeserializationConstructorsCache_Key.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectStreamClass_DeserializationConstructorsCache_Key_Lookup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectStreamClass_DeserializationConstructorsCache_Key_Lookup>
{
	static constexpr fixed_string class_name = "java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectStreamClass_DeserializationConstructorsCache_Key>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectStreamClass_DeserializationConstructorsCache_Key_Lookup : public jni::object_base<"java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup",
	java::io::ObjectStreamClass_DeserializationConstructorsCache_Key>
{
public:


protected:

	ObjectStreamClass_DeserializationConstructorsCache_Key_Lookup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_DESERIALIZATIONCONSTRUCTORSCACHE_KEY_LOOKUP
