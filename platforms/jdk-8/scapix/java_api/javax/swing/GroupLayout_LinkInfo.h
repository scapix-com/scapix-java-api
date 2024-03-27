// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_LinkInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_LinkInfo>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$LinkInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/GroupLayout_ComponentInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_LinkInfo : public jni::object_base<"javax/swing/GroupLayout$LinkInfo",
	java::lang::Object>
{
public:

	void add(jni::ref<javax::swing::GroupLayout_ComponentInfo> p1) { return call_method<"add", void>(p1); }
	void remove(jni::ref<javax::swing::GroupLayout_ComponentInfo> p1) { return call_method<"remove", void>(p1); }
	void clearCachedSize() { return call_method<"clearCachedSize", void>(); }
	jint getSize(jint p1) { return call_method<"getSize", jint>(p1); }

protected:

	GroupLayout_LinkInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_LINKINFO