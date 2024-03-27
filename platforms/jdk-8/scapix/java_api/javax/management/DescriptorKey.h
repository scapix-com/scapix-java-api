// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class DescriptorKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::DescriptorKey>
{
	static constexpr fixed_string class_name = "javax/management/DescriptorKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::DescriptorKey : public jni::object_base<"javax/management/DescriptorKey",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> value() { return call_method<"value", jni::ref<java::lang::String>>(); }

protected:

	DescriptorKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_DESCRIPTORKEY
