// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::module { class ModuleDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::module::ModuleDescriptor>
{
	static constexpr fixed_string class_name = "java/lang/module/ModuleDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Builder.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Version.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Modifier.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Provides.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Opens.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Exports.h>
#include <scapix/java_api/java/lang/module/ModuleDescriptor_Requires.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::module::ModuleDescriptor : public jni::object_base<"java/lang/module/ModuleDescriptor",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Version = ModuleDescriptor_Version;
	using Modifier = ModuleDescriptor_Modifier;
	using Builder = ModuleDescriptor_Builder;
	using Provides = ModuleDescriptor_Provides;
	using Opens = ModuleDescriptor_Opens;
	using Exports = ModuleDescriptor_Exports;
	using Requires = ModuleDescriptor_Requires;

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> modifiers() { return call_method<"modifiers", jni::ref<java::util::Set>>(); }
	jboolean isOpen() { return call_method<"isOpen", jboolean>(); }
	jboolean isAutomatic() { return call_method<"isAutomatic", jboolean>(); }
	jni::ref<java::util::Set> requires_() { return call_method<"requires", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> exports() { return call_method<"exports", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> opens() { return call_method<"opens", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> uses() { return call_method<"uses", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> provides() { return call_method<"provides", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Optional> version() { return call_method<"version", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Optional> rawVersion() { return call_method<"rawVersion", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::String> toNameAndVersion() { return call_method<"toNameAndVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Optional> mainClass() { return call_method<"mainClass", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Set> packages() { return call_method<"packages", jni::ref<java::util::Set>>(); }
	jint compareTo(jni::ref<java::lang::module::ModuleDescriptor> that) { return call_method<"compareTo", jint>(that); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::module::ModuleDescriptor_Builder> newModule(jni::ref<java::lang::String> name, jni::ref<java::util::Set> ms) { return call_static_method<"newModule", jni::ref<java::lang::module::ModuleDescriptor_Builder>>(name, ms); }
	static jni::ref<java::lang::module::ModuleDescriptor_Builder> newModule(jni::ref<java::lang::String> name) { return call_static_method<"newModule", jni::ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
	static jni::ref<java::lang::module::ModuleDescriptor_Builder> newOpenModule(jni::ref<java::lang::String> name) { return call_static_method<"newOpenModule", jni::ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
	static jni::ref<java::lang::module::ModuleDescriptor_Builder> newAutomaticModule(jni::ref<java::lang::String> name) { return call_static_method<"newAutomaticModule", jni::ref<java::lang::module::ModuleDescriptor_Builder>>(name); }
	static jni::ref<java::lang::module::ModuleDescriptor> read(jni::ref<java::io::InputStream> in, jni::ref<java::util::function::Supplier> packageFinder) { return call_static_method<"read", jni::ref<java::lang::module::ModuleDescriptor>>(in, packageFinder); }
	static jni::ref<java::lang::module::ModuleDescriptor> read(jni::ref<java::io::InputStream> in) { return call_static_method<"read", jni::ref<java::lang::module::ModuleDescriptor>>(in); }
	static jni::ref<java::lang::module::ModuleDescriptor> read(jni::ref<java::nio::ByteBuffer> bb, jni::ref<java::util::function::Supplier> packageFinder) { return call_static_method<"read", jni::ref<java::lang::module::ModuleDescriptor>>(bb, packageFinder); }
	static jni::ref<java::lang::module::ModuleDescriptor> read(jni::ref<java::nio::ByteBuffer> bb) { return call_static_method<"read", jni::ref<java::lang::module::ModuleDescriptor>>(bb); }

protected:

	ModuleDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEDESCRIPTOR
