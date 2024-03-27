// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractElement.h>
#include <scapix/java_api/java/lang/classfile/Superclass.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class SuperclassImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::SuperclassImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/SuperclassImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractElement, scapix::java_api::java::lang::classfile::Superclass>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectClassBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::SuperclassImpl : public jni::object_base<"jdk/internal/classfile/impl/SuperclassImpl",
	jdk::internal::classfile::impl::AbstractElement,
	java::lang::classfile::Superclass>
{
public:

	static jni::ref<jdk::internal::classfile::impl::SuperclassImpl> new_object(jni::ref<java::lang::classfile::constantpool::ClassEntry> superclassEntry) { return base_::new_object(superclassEntry); }
	jni::ref<java::lang::classfile::constantpool::ClassEntry> superclassEntry() { return call_method<"superclassEntry", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> builder) { return call_method<"writeTo", void>(builder); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SuperclassImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_SUPERCLASSIMPL
