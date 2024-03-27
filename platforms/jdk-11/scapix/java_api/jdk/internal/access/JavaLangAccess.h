// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaLangAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaLangAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaLangAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/lang/Module.h>
#include <scapix/java_api/java/lang/ModuleLayer.h>
#include <scapix/java_api/java/lang/Package.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor.h>
#include <scapix/java_api/java/lang/reflect/Executable.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/security/AccessControlContext.h>
#include <scapix/java_api/java/security/ProtectionDomain.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/jdk/internal/module/ServicesCatalog.h>
#include <scapix/java_api/jdk/internal/reflect/ConstantPool.h>
#include <scapix/java_api/sun/nio/ch/Interruptible.h>
#include <scapix/java_api/sun/reflect/annotation/AnnotationType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaLangAccess : public jni::object_base<"jdk/internal/access/JavaLangAccess",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getDeclaredPublicMethods(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Class>> p3) { return call_method<"getDeclaredPublicMethods", jni::ref<java::util::List>>(p1, p2, p3); }
	jni::ref<jdk::internal::reflect::ConstantPool> getConstantPool(jni::ref<java::lang::Class> p1) { return call_method<"getConstantPool", jni::ref<jdk::internal::reflect::ConstantPool>>(p1); }
	jboolean casAnnotationType(jni::ref<java::lang::Class> p1, jni::ref<sun::reflect::annotation::AnnotationType> p2, jni::ref<sun::reflect::annotation::AnnotationType> p3) { return call_method<"casAnnotationType", jboolean>(p1, p2, p3); }
	jni::ref<sun::reflect::annotation::AnnotationType> getAnnotationType(jni::ref<java::lang::Class> p1) { return call_method<"getAnnotationType", jni::ref<sun::reflect::annotation::AnnotationType>>(p1); }
	jni::ref<java::util::Map> getDeclaredAnnotationMap(jni::ref<java::lang::Class> p1) { return call_method<"getDeclaredAnnotationMap", jni::ref<java::util::Map>>(p1); }
	jni::ref<jni::array<jbyte>> getRawClassAnnotations(jni::ref<java::lang::Class> p1) { return call_method<"getRawClassAnnotations", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getRawClassTypeAnnotations(jni::ref<java::lang::Class> p1) { return call_method<"getRawClassTypeAnnotations", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getRawExecutableTypeAnnotations(jni::ref<java::lang::reflect::Executable> p1) { return call_method<"getRawExecutableTypeAnnotations", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<java::lang::Enum>> getEnumConstantsShared(jni::ref<java::lang::Class> p1) { return call_method<"getEnumConstantsShared", jni::ref<jni::array<java::lang::Enum>>>(p1); }
	void blockedOn(jni::ref<sun::nio::ch::Interruptible> p1) { return call_method<"blockedOn", void>(p1); }
	void registerShutdownHook(jint p1, jboolean p2, jni::ref<java::lang::Runnable> p3) { return call_method<"registerShutdownHook", void>(p1, p2, p3); }
	jni::ref<java::lang::Thread> newThreadWithAcc(jni::ref<java::lang::Runnable> p1, jni::ref<java::security::AccessControlContext> p2) { return call_method<"newThreadWithAcc", jni::ref<java::lang::Thread>>(p1, p2); }
	void invokeFinalize(jni::ref<java::lang::Object> p1) { return call_method<"invokeFinalize", void>(p1); }
	jni::ref<java::util::concurrent::ConcurrentHashMap> createOrGetClassLoaderValueMap(jni::ref<java::lang::ClassLoader> p1) { return call_method<"createOrGetClassLoaderValueMap", jni::ref<java::util::concurrent::ConcurrentHashMap>>(p1); }
	jni::ref<java::lang::Class> defineClass(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jbyte>> p3, jni::ref<java::security::ProtectionDomain> p4, jni::ref<java::lang::String> p5) { return call_method<"defineClass", jni::ref<java::lang::Class>>(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::Class> findBootstrapClassOrNull(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::lang::String> p2) { return call_method<"findBootstrapClassOrNull", jni::ref<java::lang::Class>>(p1, p2); }
	jni::ref<java::lang::Package> definePackage(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Module> p3) { return call_method<"definePackage", jni::ref<java::lang::Package>>(p1, p2, p3); }
	jni::ref<java::lang::String> fastUUID(jlong p1, jlong p2) { return call_method<"fastUUID", jni::ref<java::lang::String>>(p1, p2); }
	void addNonExportedPackages(jni::ref<java::lang::ModuleLayer> p1) { return call_method<"addNonExportedPackages", void>(p1); }
	void invalidatePackageAccessCache() { return call_method<"invalidatePackageAccessCache", void>(); }
	jni::ref<java::lang::Module> defineModule(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::lang::module::ModuleDescriptor> p2, jni::ref<java::net::URI> p3) { return call_method<"defineModule", jni::ref<java::lang::Module>>(p1, p2, p3); }
	jni::ref<java::lang::Module> defineUnnamedModule(jni::ref<java::lang::ClassLoader> p1) { return call_method<"defineUnnamedModule", jni::ref<java::lang::Module>>(p1); }
	void addReads(jni::ref<java::lang::Module> p1, jni::ref<java::lang::Module> p2) { return call_method<"addReads", void>(p1, p2); }
	void addReadsAllUnnamed(jni::ref<java::lang::Module> p1) { return call_method<"addReadsAllUnnamed", void>(p1); }
	void addExports(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Module> p3) { return call_method<"addExports", void>(p1, p2, p3); }
	void addExportsToAllUnnamed(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2) { return call_method<"addExportsToAllUnnamed", void>(p1, p2); }
	void addOpens(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Module> p3) { return call_method<"addOpens", void>(p1, p2, p3); }
	void addOpensToAllUnnamed(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2) { return call_method<"addOpensToAllUnnamed", void>(p1, p2); }
	void addOpensToAllUnnamed(jni::ref<java::lang::Module> p1, jni::ref<java::util::Iterator> p2) { return call_method<"addOpensToAllUnnamed", void>(p1, p2); }
	void addUses(jni::ref<java::lang::Module> p1, jni::ref<java::lang::Class> p2) { return call_method<"addUses", void>(p1, p2); }
	jboolean isReflectivelyExported(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Module> p3) { return call_method<"isReflectivelyExported", jboolean>(p1, p2, p3); }
	jboolean isReflectivelyOpened(jni::ref<java::lang::Module> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Module> p3) { return call_method<"isReflectivelyOpened", jboolean>(p1, p2, p3); }
	jni::ref<jdk::internal::module::ServicesCatalog> getServicesCatalog(jni::ref<java::lang::ModuleLayer> p1) { return call_method<"getServicesCatalog", jni::ref<jdk::internal::module::ServicesCatalog>>(p1); }
	jni::ref<java::util::stream::Stream> layers(jni::ref<java::lang::ModuleLayer> p1) { return call_method<"layers", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> layers(jni::ref<java::lang::ClassLoader> p1) { return call_method<"layers", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::lang::String> newStringNoRepl(jni::ref<jni::array<jbyte>> p1, jni::ref<java::nio::charset::Charset> p2) { return call_method<"newStringNoRepl", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<jni::array<jbyte>> getBytesNoRepl(jni::ref<java::lang::String> p1, jni::ref<java::nio::charset::Charset> p2) { return call_method<"getBytesNoRepl", jni::ref<jni::array<jbyte>>>(p1, p2); }
	jni::ref<java::lang::String> newStringUTF8NoRepl(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"newStringUTF8NoRepl", jni::ref<java::lang::String>>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> getBytesUTF8NoRepl(jni::ref<java::lang::String> p1) { return call_method<"getBytesUTF8NoRepl", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	JavaLangAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGACCESS