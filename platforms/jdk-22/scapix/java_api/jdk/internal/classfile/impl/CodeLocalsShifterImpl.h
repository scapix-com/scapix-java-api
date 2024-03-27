// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/components/CodeLocalsShifter.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class CodeLocalsShifterImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::CodeLocalsShifterImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/CodeLocalsShifterImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::components::CodeLocalsShifter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/CodeBuilder.h>
#include <scapix/java_api/java/lang/classfile/CodeElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::CodeLocalsShifterImpl : public jni::object_base<"jdk/internal/classfile/impl/CodeLocalsShifterImpl",
	java::lang::Object,
	java::lang::classfile::components::CodeLocalsShifter>
{
public:

	static jni::ref<jdk::internal::classfile::impl::CodeLocalsShifterImpl> new_object(jint fixed) { return base_::new_object(fixed); }
	void accept(jni::ref<java::lang::classfile::CodeBuilder> cob, jni::ref<java::lang::classfile::CodeElement> coe) { return call_method<"accept", void>(cob, coe); }

protected:

	CodeLocalsShifterImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CODELOCALSSHIFTERIMPL