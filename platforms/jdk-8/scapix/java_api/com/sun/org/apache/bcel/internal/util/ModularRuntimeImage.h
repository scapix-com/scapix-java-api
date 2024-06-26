// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::util { class ModularRuntimeImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::util::ModularRuntimeImage>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/util/ModularRuntimeImage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/FileSystem.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::util::ModularRuntimeImage : public jni::object_base<"com/sun/org/apache/bcel/internal/util/ModularRuntimeImage",
	java::lang::Object,
	java::io::Closeable>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::util::ModularRuntimeImage> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::bcel::internal::util::ModularRuntimeImage> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::nio::file::FileSystem> getFileSystem() { return call_method<"getFileSystem", jni::ref<java::nio::file::FileSystem>>(); }
	jni::ref<java::util::List> list(jni::ref<java::nio::file::Path> p1) { return call_method<"list", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> list(jni::ref<java::lang::String> p1) { return call_method<"list", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> modules() { return call_method<"modules", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> packages() { return call_method<"packages", jni::ref<java::util::List>>(); }

protected:

	ModularRuntimeImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_MODULARRUNTIMEIMAGE
