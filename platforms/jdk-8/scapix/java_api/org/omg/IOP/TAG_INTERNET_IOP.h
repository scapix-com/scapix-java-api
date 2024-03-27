// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP_FWD
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::IOP { class TAG_INTERNET_IOP; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::IOP::TAG_INTERNET_IOP>
{
	static constexpr fixed_string class_name = "org/omg/IOP/TAG_INTERNET_IOP";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP)
#define SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::IOP::TAG_INTERNET_IOP : public jni::object_base<"org/omg/IOP/TAG_INTERNET_IOP",
	java::lang::Object>
{
public:

	static jint value() { return get_static_field<"value", jint>(); }


protected:

	TAG_INTERNET_IOP(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_IOP_TAG_INTERNET_IOP