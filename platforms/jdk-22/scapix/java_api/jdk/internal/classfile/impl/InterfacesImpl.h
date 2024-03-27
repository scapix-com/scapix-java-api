// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractElement.h>
#include <scapix/java_api/java/lang/classfile/Interfaces.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class InterfacesImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::InterfacesImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/InterfacesImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractElement, scapix::java_api::java::lang::classfile::Interfaces>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectClassBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::InterfacesImpl : public jni::object_base<"jdk/internal/classfile/impl/InterfacesImpl",
	jdk::internal::classfile::impl::AbstractElement,
	java::lang::classfile::Interfaces>
{
public:

	static jni::ref<jdk::internal::classfile::impl::InterfacesImpl> new_object(jni::ref<java::util::List> interfaces) { return base_::new_object(interfaces); }
	jni::ref<java::util::List> interfaces() { return call_method<"interfaces", jni::ref<java::util::List>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> builder) { return call_method<"writeTo", void>(builder); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	InterfacesImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_INTERFACESIMPL
