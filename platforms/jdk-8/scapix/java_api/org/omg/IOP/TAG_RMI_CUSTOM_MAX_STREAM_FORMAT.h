// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT_FWD
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::IOP { class TAG_RMI_CUSTOM_MAX_STREAM_FORMAT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::IOP::TAG_RMI_CUSTOM_MAX_STREAM_FORMAT>
{
	static constexpr fixed_string class_name = "org/omg/IOP/TAG_RMI_CUSTOM_MAX_STREAM_FORMAT";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT)
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::IOP::TAG_RMI_CUSTOM_MAX_STREAM_FORMAT : public jni::object_base<"org/omg/IOP/TAG_RMI_CUSTOM_MAX_STREAM_FORMAT",
	java::lang::Object>
{
public:

	static jint value() { return get_static_field<"value", jint>(); }


protected:

	TAG_RMI_CUSTOM_MAX_STREAM_FORMAT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_RMI_CUSTOM_MAX_STREAM_FORMAT
