// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES_FWD
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::IOP { class TAG_POLICIES; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::IOP::TAG_POLICIES>
{
	static constexpr fixed_string class_name = "org/omg/IOP/TAG_POLICIES";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES)
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::IOP::TAG_POLICIES : public jni::object_base<"org/omg/IOP/TAG_POLICIES",
	java::lang::Object>
{
public:

	static jint value() { return get_static_field<"value", jint>(); }


protected:

	TAG_POLICIES(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_POLICIES
