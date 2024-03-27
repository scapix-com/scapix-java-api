// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Hashtable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Properties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Properties>
{
	static constexpr fixed_string class_name = "java/util/Properties";
	using base_classes = std::tuple<scapix::java_api::java::util::Hashtable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES)
#define SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Properties : public jni::object_base<"java/util/Properties",
	java::util::Hashtable>
{
public:

	static jni::ref<java::util::Properties> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Properties> new_object(jni::ref<java::util::Properties> properties) { return base_::new_object(properties); }
	jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> name) { return call_method<"getProperty", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> getProperty(jni::ref<java::lang::String> name, jni::ref<java::lang::String> defaultValue) { return call_method<"getProperty", jni::ref<java::lang::String>>(name, defaultValue); }
	void list(jni::ref<java::io::PrintStream> out) { return call_method<"list", void>(out); }
	void list(jni::ref<java::io::PrintWriter> out) { return call_method<"list", void>(out); }
	void load(jni::ref<java::io::InputStream> in) { return call_method<"load", void>(in); }
	void load(jni::ref<java::io::Reader> in) { return call_method<"load", void>(in); }
	jni::ref<java::util::Enumeration> propertyNames() { return call_method<"propertyNames", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Set> stringPropertyNames() { return call_method<"stringPropertyNames", jni::ref<java::util::Set>>(); }
	void save(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::String> comment) { return call_method<"save", void>(out, comment); }
	jni::ref<java::lang::Object> setProperty(jni::ref<java::lang::String> name, jni::ref<java::lang::String> value) { return call_method<"setProperty", jni::ref<java::lang::Object>>(name, value); }
	void store(jni::ref<java::io::OutputStream> out, jni::ref<java::lang::String> comment) { return call_method<"store", void>(out, comment); }
	void store(jni::ref<java::io::Writer> writer, jni::ref<java::lang::String> comment) { return call_method<"store", void>(writer, comment); }
	void loadFromXML(jni::ref<java::io::InputStream> in) { return call_method<"loadFromXML", void>(in); }
	void storeToXML(jni::ref<java::io::OutputStream> os, jni::ref<java::lang::String> comment) { return call_method<"storeToXML", void>(os, comment); }
	void storeToXML(jni::ref<java::io::OutputStream> os, jni::ref<java::lang::String> comment, jni::ref<java::lang::String> encoding) { return call_method<"storeToXML", void>(os, comment, encoding); }

protected:

	Properties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PROPERTIES