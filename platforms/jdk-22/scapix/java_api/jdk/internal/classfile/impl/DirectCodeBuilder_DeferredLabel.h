// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class DirectCodeBuilder_DeferredLabel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::DirectCodeBuilder_DeferredLabel>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/DirectCodeBuilder$DeferredLabel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::classfile::impl::DirectCodeBuilder_DeferredLabel : public jni::object_base<"jdk/internal/classfile/impl/DirectCodeBuilder$DeferredLabel",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint labelPc() { return call_method<"labelPc", jint>(); }
	jint size() { return call_method<"size", jint>(); }
	jint instructionPc() { return call_method<"instructionPc", jint>(); }
	jni::ref<java::lang::classfile::Label> label() { return call_method<"label", jni::ref<java::lang::classfile::Label>>(); }

protected:

	DirectCodeBuilder_DeferredLabel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEFERREDLABEL
