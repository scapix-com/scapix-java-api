// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/FieldTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TransformImpl_UnresolvedFieldTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TransformImpl_UnresolvedFieldTransform>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TransformImpl$UnresolvedFieldTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::FieldTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/FieldBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/FieldElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::classfile::impl::TransformImpl_UnresolvedFieldTransform : public jni::object_base<"jdk/internal/classfile/impl/TransformImpl$UnresolvedFieldTransform",
	java::lang::Object,
	jdk::internal::classfile::FieldTransform>
{
public:

	void accept(jni::ref<jdk::internal::classfile::FieldBuilder> builder, jni::ref<jdk::internal::classfile::FieldElement> element) { return call_method<"accept", void>(builder, element); }
	void atEnd(jni::ref<jdk::internal::classfile::FieldBuilder> builder) { return call_method<"atEnd", void>(builder); }
	void atStart(jni::ref<jdk::internal::classfile::FieldBuilder> builder) { return call_method<"atStart", void>(builder); }

protected:

	TransformImpl_UnresolvedFieldTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_UNRESOLVEDFIELDTRANSFORM