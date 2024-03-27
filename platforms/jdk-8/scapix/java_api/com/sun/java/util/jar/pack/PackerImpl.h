// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/TLGlobals.h>
#include <scapix/java_api/java/util/jar/Pack200_Packer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class PackerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::PackerImpl>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/PackerImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::TLGlobals, scapix::java_api::java::util::jar::Pack200_Packer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/java/util/jar/JarInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::PackerImpl : public jni::object_base<"com/sun/java/util/jar/pack/PackerImpl",
	com::sun::java::util::jar::pack::TLGlobals,
	java::util::jar::Pack200_Packer>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::PackerImpl> new_object() { return base_::new_object(); }
	jni::ref<java::util::SortedMap> properties() { return call_method<"properties", jni::ref<java::util::SortedMap>>(); }
	void pack(jni::ref<java::util::jar::JarFile> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"pack", void>(p1, p2); }
	void pack(jni::ref<java::util::jar::JarInputStream> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"pack", void>(p1, p2); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }

protected:

	PackerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL