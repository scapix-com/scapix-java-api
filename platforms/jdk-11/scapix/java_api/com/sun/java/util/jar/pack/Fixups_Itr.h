// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Fixups_Itr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Fixups_Itr>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Fixups$Itr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Fixups_Fixup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::Fixups_Itr : public jni::object_base<"com/sun/java/util/jar/pack/Fixups$Itr",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	void remove() { return call_method<"remove", void>(); }
	jni::ref<com::sun::java::util::jar::pack::Fixups_Fixup> next() { return call_method<"next", jni::ref<com::sun::java::util::jar::pack::Fixups_Fixup>>(); }

protected:

	Fixups_Itr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_FIXUPS_ITR