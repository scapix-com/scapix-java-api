// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class DirectCodeBuilder_LabelOverflowException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::DirectCodeBuilder_LabelOverflowException>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/DirectCodeBuilder$LabelOverflowException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::classfile::impl::DirectCodeBuilder_LabelOverflowException : public jni::object_base<"jdk/internal/classfile/impl/DirectCodeBuilder$LabelOverflowException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder_LabelOverflowException> new_object() { return base_::new_object(); }

protected:

	DirectCodeBuilder_LabelOverflowException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_LABELOVERFLOWEXCEPTION
