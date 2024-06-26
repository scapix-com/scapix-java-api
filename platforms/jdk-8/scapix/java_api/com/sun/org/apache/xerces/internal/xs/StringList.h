// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xs { class StringList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xs::StringList>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xs/StringList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::List>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xs::StringList : public jni::object_base<"com/sun/org/apache/xerces/internal/xs/StringList",
	java::lang::Object,
	java::util::List>
{
public:

	jint getLength() { return call_method<"getLength", jint>(); }
	jboolean contains(jni::ref<java::lang::String> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::lang::String> item(jint p1) { return call_method<"item", jni::ref<java::lang::String>>(p1); }

protected:

	StringList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_STRINGLIST
