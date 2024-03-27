// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class LabelContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::LabelContext>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/LabelContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::LabelContext : public jni::object_base<"jdk/internal/classfile/impl/LabelContext",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::classfile::Label> newLabel() { return call_method<"newLabel", jni::ref<jdk::internal::classfile::Label>>(); }
	jni::ref<jdk::internal::classfile::Label> getLabel(jint p1) { return call_method<"getLabel", jni::ref<jdk::internal::classfile::Label>>(p1); }
	void setLabelTarget(jni::ref<jdk::internal::classfile::Label> p1, jint p2) { return call_method<"setLabelTarget", void>(p1, p2); }
	jint labelToBci(jni::ref<jdk::internal::classfile::Label> p1) { return call_method<"labelToBci", jint>(p1); }

protected:

	LabelContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_LABELCONTEXT
