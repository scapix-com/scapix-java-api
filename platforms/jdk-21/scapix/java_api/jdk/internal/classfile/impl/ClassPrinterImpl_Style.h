// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ClassPrinterImpl_Style; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ClassPrinterImpl_Style>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ClassPrinterImpl$Style";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ClassPrinterImpl_Style : public jni::object_base<"jdk/internal/classfile/impl/ClassPrinterImpl$Style",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style> BLOCK() { return get_static_field<"BLOCK", jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style>>(); }
	static jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style> FLOW() { return get_static_field<"FLOW", jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style>>(); }

	static jni::ref<jni::array<jdk::internal::classfile::impl::ClassPrinterImpl_Style>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::classfile::impl::ClassPrinterImpl_Style>>>(); }
	static jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::classfile::impl::ClassPrinterImpl_Style>>(name); }

protected:

	ClassPrinterImpl_Style(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSPRINTERIMPL_STYLE