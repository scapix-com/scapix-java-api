// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Module; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Module>
{
	static constexpr fixed_string class_name = "java/lang/Module";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::AnnotatedElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/ModuleLayer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Module : public jni::object_base<"java/lang/Module",
	java::lang::Object,
	java::lang::reflect::AnnotatedElement>
{
public:

	jboolean isNamed() { return call_method<"isNamed", jboolean>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::ClassLoader> getClassLoader() { return call_method<"getClassLoader", jni::ref<java::lang::ClassLoader>>(); }
	jni::ref<java::lang::module::ModuleDescriptor> getDescriptor() { return call_method<"getDescriptor", jni::ref<java::lang::module::ModuleDescriptor>>(); }
	jni::ref<java::lang::ModuleLayer> getLayer() { return call_method<"getLayer", jni::ref<java::lang::ModuleLayer>>(); }
	jboolean isNativeAccessEnabled() { return call_method<"isNativeAccessEnabled", jboolean>(); }
	jboolean canRead(jni::ref<java::lang::Module> other) { return call_method<"canRead", jboolean>(other); }
	jni::ref<java::lang::Module> addReads(jni::ref<java::lang::Module> other) { return call_method<"addReads", jni::ref<java::lang::Module>>(other); }
	jboolean isExported(jni::ref<java::lang::String> pn, jni::ref<java::lang::Module> other) { return call_method<"isExported", jboolean>(pn, other); }
	jboolean isOpen(jni::ref<java::lang::String> pn, jni::ref<java::lang::Module> other) { return call_method<"isOpen", jboolean>(pn, other); }
	jboolean isExported(jni::ref<java::lang::String> pn) { return call_method<"isExported", jboolean>(pn); }
	jboolean isOpen(jni::ref<java::lang::String> pn) { return call_method<"isOpen", jboolean>(pn); }
	jni::ref<java::lang::Module> addExports(jni::ref<java::lang::String> pn, jni::ref<java::lang::Module> other) { return call_method<"addExports", jni::ref<java::lang::Module>>(pn, other); }
	jni::ref<java::lang::Module> addOpens(jni::ref<java::lang::String> pn, jni::ref<java::lang::Module> other) { return call_method<"addOpens", jni::ref<java::lang::Module>>(pn, other); }
	jni::ref<java::lang::Module> addUses(jni::ref<java::lang::Class> service) { return call_method<"addUses", jni::ref<java::lang::Module>>(service); }
	jboolean canUse(jni::ref<java::lang::Class> service) { return call_method<"canUse", jboolean>(service); }
	jni::ref<java::util::Set> getPackages() { return call_method<"getPackages", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> annotationClass) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(annotationClass); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotations() { return call_method<"getAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotations() { return call_method<"getDeclaredAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::io::InputStream> getResourceAsStream(jni::ref<java::lang::String> name) { return call_method<"getResourceAsStream", jni::ref<java::io::InputStream>>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Module(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE
