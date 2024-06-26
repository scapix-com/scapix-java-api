// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::directory { class ModificationItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::directory::ModificationItem>
{
	static constexpr fixed_string class_name = "javax/naming/directory/ModificationItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM)
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/directory/Attribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::directory::ModificationItem : public jni::object_base<"javax/naming/directory/ModificationItem",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::naming::directory::ModificationItem> new_object(jint p1, jni::ref<javax::naming::directory::Attribute> p2) { return base_::new_object(p1, p2); }
	jint getModificationOp() { return call_method<"getModificationOp", jint>(); }
	jni::ref<javax::naming::directory::Attribute> getAttribute() { return call_method<"getAttribute", jni::ref<javax::naming::directory::Attribute>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ModificationItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_MODIFICATIONITEM
