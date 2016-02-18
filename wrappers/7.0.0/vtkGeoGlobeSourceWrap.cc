/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGeoSourceWrap.h"
#include "vtkGeoGlobeSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoTreeNodeWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoGlobeSourceWrap::ptpl;

VtkGeoGlobeSourceWrap::VtkGeoGlobeSourceWrap()
{ }

VtkGeoGlobeSourceWrap::VtkGeoGlobeSourceWrap(vtkSmartPointer<vtkGeoGlobeSource> _native)
{ native = _native; }

VtkGeoGlobeSourceWrap::~VtkGeoGlobeSourceWrap()
{ }

void VtkGeoGlobeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoGlobeSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoGlobeSource").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoGlobeSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoGlobeSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGeoSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGeoSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoGlobeSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FetchChild", FetchChild);
	Nan::SetPrototypeMethod(tpl, "fetchChild", FetchChild);

	Nan::SetPrototypeMethod(tpl, "FetchRoot", FetchRoot);
	Nan::SetPrototypeMethod(tpl, "fetchRoot", FetchRoot);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKGEOGLOBESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGEOGLOBESOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGeoGlobeSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoGlobeSource> native = vtkSmartPointer<vtkGeoGlobeSource>::New();
		VtkGeoGlobeSourceWrap* obj = new VtkGeoGlobeSourceWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoGlobeSourceWrap::FetchChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkGeoTreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[2]->ToObject());
				bool r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->FetchChild(
					(vtkGeoTreeNode *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					(vtkGeoTreeNode *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGlobeSourceWrap::FetchRoot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FetchRoot(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGlobeSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoGlobeSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGlobeSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	vtkGeoGlobeSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGeoGlobeSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoGlobeSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoGlobeSourceWrap *w = new VtkGeoGlobeSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoGlobeSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGlobeSourceWrap>(info.Holder());
	vtkGeoGlobeSource *native = (vtkGeoGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoGlobeSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGeoGlobeSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoGlobeSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoGlobeSourceWrap *w = new VtkGeoGlobeSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

