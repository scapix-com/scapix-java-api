// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractElement.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileVersion.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ClassfileVersionImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ClassfileVersionImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ClassfileVersionImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractElement, scapix::java_api::jdk::internal::classfile::ClassfileVersion>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectClassBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ClassfileVersionImpl : public jni::object_base<"jdk/internal/classfile/impl/ClassfileVersionImpl",
	jdk::internal::classfile::impl::AbstractElement,
	jdk::internal::classfile::ClassfileVersion>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ClassfileVersionImpl> new_object(jint majorVersion, jint minorVersion) { return base_::new_object(majorVersion, minorVersion); }
	jint majorVersion() { return call_method<"majorVersion", jint>(); }
	jint minorVersion() { return call_method<"minorVersion", jint>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> builder) { return call_method<"writeTo", void>(builder); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ClassfileVersionImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSFILEVERSIONIMPL
