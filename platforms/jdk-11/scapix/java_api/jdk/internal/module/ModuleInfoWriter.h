// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleInfoWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleInfoWriter>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleInfoWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/jdk/internal/module/ModuleTarget.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ModuleInfoWriter : public jni::object_base<"jdk/internal/module/ModuleInfoWriter",
	java::lang::Object>
{
public:

	static void write(jni::ref<java::lang::module::ModuleDescriptor> descriptor, jni::ref<jdk::internal::module::ModuleTarget> target, jni::ref<java::io::OutputStream> out) { return call_static_method<"write", void>(descriptor, target, out); }
	static void write(jni::ref<java::lang::module::ModuleDescriptor> descriptor, jni::ref<java::io::OutputStream> out) { return call_static_method<"write", void>(descriptor, out); }
	static jni::ref<jni::array<jbyte>> toBytes(jni::ref<java::lang::module::ModuleDescriptor> descriptor) { return call_static_method<"toBytes", jni::ref<jni::array<jbyte>>>(descriptor); }
	static jni::ref<java::nio::ByteBuffer> toByteBuffer(jni::ref<java::lang::module::ModuleDescriptor> descriptor) { return call_static_method<"toByteBuffer", jni::ref<java::nio::ByteBuffer>>(descriptor); }

protected:

	ModuleInfoWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFOWRITER
