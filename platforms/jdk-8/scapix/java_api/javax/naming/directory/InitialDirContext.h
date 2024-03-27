// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/InitialContext.h>
#include <scapix/java_api/javax/naming/directory/DirContext.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::directory { class InitialDirContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::directory::InitialDirContext>
{
	static constexpr fixed_string class_name = "javax/naming/directory/InitialDirContext";
	using base_classes = std::tuple<scapix::java_api::javax::naming::InitialContext, scapix::java_api::javax::naming::directory::DirContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT)
#define SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>
#include <scapix/java_api/javax/naming/directory/Attributes.h>
#include <scapix/java_api/javax/naming/directory/ModificationItem.h>
#include <scapix/java_api/javax/naming/directory/SearchControls.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::directory::InitialDirContext : public jni::object_base<"javax/naming/directory/InitialDirContext",
	javax::naming::InitialContext,
	javax::naming::directory::DirContext>
{
public:

	static jni::ref<javax::naming::directory::InitialDirContext> new_object() { return base_::new_object(); }
	static jni::ref<javax::naming::directory::InitialDirContext> new_object(jni::ref<java::util::Hashtable> p1) { return base_::new_object(p1); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<java::lang::String> p1) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1, p2); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<javax::naming::Name> p1) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1); }
	jni::ref<javax::naming::directory::Attributes> getAttributes(jni::ref<javax::naming::Name> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getAttributes", jni::ref<javax::naming::directory::Attributes>>(p1, p2); }
	void modifyAttributes(jni::ref<java::lang::String> p1, jint p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"modifyAttributes", void>(p1, p2, p3); }
	void modifyAttributes(jni::ref<javax::naming::Name> p1, jint p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"modifyAttributes", void>(p1, p2, p3); }
	void modifyAttributes(jni::ref<java::lang::String> p1, jni::ref<jni::array<javax::naming::directory::ModificationItem>> p2) { return call_method<"modifyAttributes", void>(p1, p2); }
	void modifyAttributes(jni::ref<javax::naming::Name> p1, jni::ref<jni::array<javax::naming::directory::ModificationItem>> p2) { return call_method<"modifyAttributes", void>(p1, p2); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"bind", void>(p1, p2, p3); }
	void bind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"bind", void>(p1, p2, p3); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"rebind", void>(p1, p2, p3); }
	void rebind(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Object> p2, jni::ref<javax::naming::directory::Attributes> p3) { return call_method<"rebind", void>(p1, p2, p3); }
	jni::ref<javax::naming::directory::DirContext> createSubcontext(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"createSubcontext", jni::ref<javax::naming::directory::DirContext>>(p1, p2); }
	jni::ref<javax::naming::directory::DirContext> createSubcontext(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"createSubcontext", jni::ref<javax::naming::directory::DirContext>>(p1, p2); }
	jni::ref<javax::naming::directory::DirContext> getSchema(jni::ref<java::lang::String> p1) { return call_method<"getSchema", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchema(jni::ref<javax::naming::Name> p1) { return call_method<"getSchema", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchemaClassDefinition(jni::ref<java::lang::String> p1) { return call_method<"getSchemaClassDefinition", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::directory::DirContext> getSchemaClassDefinition(jni::ref<javax::naming::Name> p1) { return call_method<"getSchemaClassDefinition", jni::ref<javax::naming::directory::DirContext>>(p1); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<javax::naming::directory::Attributes> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<javax::naming::directory::Attributes> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::naming::directory::SearchControls> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::String> p2, jni::ref<javax::naming::directory::SearchControls> p3) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<javax::naming::directory::SearchControls> p4) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3, p4); }
	jni::ref<javax::naming::NamingEnumeration> search(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<javax::naming::directory::SearchControls> p4) { return call_method<"search", jni::ref<javax::naming::NamingEnumeration>>(p1, p2, p3, p4); }

protected:

	InitialDirContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_DIRECTORY_INITIALDIRCONTEXT