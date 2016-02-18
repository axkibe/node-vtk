/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkSelectionAlgorithmWrap.h"
#include "vtkKdTreeSelectorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkKdTreeWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkKdTreeSelectorWrap::ptpl;

VtkKdTreeSelectorWrap::VtkKdTreeSelectorWrap()
{ }

VtkKdTreeSelectorWrap::VtkKdTreeSelectorWrap(vtkSmartPointer<vtkKdTreeSelector> _native)
{ native = _native; }

VtkKdTreeSelectorWrap::~VtkKdTreeSelectorWrap()
{ }

void VtkKdTreeSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkKdTreeSelector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("KdTreeSelector").ToLocalChecked(), ConstructorGetter);
}

void VtkKdTreeSelectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkKdTreeSelectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSelectionAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSelectionAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkKdTreeSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetKdTree", GetKdTree);
	Nan::SetPrototypeMethod(tpl, "getKdTree", GetKdTree);

	Nan::SetPrototypeMethod(tpl, "GetSelectionAttribute", GetSelectionAttribute);
	Nan::SetPrototypeMethod(tpl, "getSelectionAttribute", GetSelectionAttribute);

	Nan::SetPrototypeMethod(tpl, "GetSelectionBounds", GetSelectionBounds);
	Nan::SetPrototypeMethod(tpl, "getSelectionBounds", GetSelectionBounds);

	Nan::SetPrototypeMethod(tpl, "GetSelectionFieldName", GetSelectionFieldName);
	Nan::SetPrototypeMethod(tpl, "getSelectionFieldName", GetSelectionFieldName);

	Nan::SetPrototypeMethod(tpl, "GetSingleSelection", GetSingleSelection);
	Nan::SetPrototypeMethod(tpl, "getSingleSelection", GetSingleSelection);

	Nan::SetPrototypeMethod(tpl, "GetSingleSelectionThreshold", GetSingleSelectionThreshold);
	Nan::SetPrototypeMethod(tpl, "getSingleSelectionThreshold", GetSingleSelectionThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetKdTree", SetKdTree);
	Nan::SetPrototypeMethod(tpl, "setKdTree", SetKdTree);

	Nan::SetPrototypeMethod(tpl, "SetSelectionAttribute", SetSelectionAttribute);
	Nan::SetPrototypeMethod(tpl, "setSelectionAttribute", SetSelectionAttribute);

	Nan::SetPrototypeMethod(tpl, "SetSelectionBounds", SetSelectionBounds);
	Nan::SetPrototypeMethod(tpl, "setSelectionBounds", SetSelectionBounds);

	Nan::SetPrototypeMethod(tpl, "SetSelectionFieldName", SetSelectionFieldName);
	Nan::SetPrototypeMethod(tpl, "setSelectionFieldName", SetSelectionFieldName);

	Nan::SetPrototypeMethod(tpl, "SetSingleSelection", SetSingleSelection);
	Nan::SetPrototypeMethod(tpl, "setSingleSelection", SetSingleSelection);

	Nan::SetPrototypeMethod(tpl, "SetSingleSelectionThreshold", SetSingleSelectionThreshold);
	Nan::SetPrototypeMethod(tpl, "setSingleSelectionThreshold", SetSingleSelectionThreshold);

	Nan::SetPrototypeMethod(tpl, "SingleSelectionOff", SingleSelectionOff);
	Nan::SetPrototypeMethod(tpl, "singleSelectionOff", SingleSelectionOff);

	Nan::SetPrototypeMethod(tpl, "SingleSelectionOn", SingleSelectionOn);
	Nan::SetPrototypeMethod(tpl, "singleSelectionOn", SingleSelectionOn);

#ifdef VTK_NODE_PLUS_VTKKDTREESELECTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKKDTREESELECTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkKdTreeSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKdTreeSelector> native = vtkSmartPointer<vtkKdTreeSelector>::New();
		VtkKdTreeSelectorWrap* obj = new VtkKdTreeSelectorWrap(native);
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

void VtkKdTreeSelectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKdTreeSelectorWrap::GetKdTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	vtkKdTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKdTree();
	VtkKdTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKdTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdTreeWrap *w = new VtkKdTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdTreeSelectorWrap::GetSelectionAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdTreeSelectorWrap::GetSelectionBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkKdTreeSelectorWrap::GetSelectionFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionFieldName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKdTreeSelectorWrap::GetSingleSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleSelection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdTreeSelectorWrap::GetSingleSelectionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleSelectionThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdTreeSelectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
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

void VtkKdTreeSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	vtkKdTreeSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkKdTreeSelectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKdTreeSelectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdTreeSelectorWrap *w = new VtkKdTreeSelectorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdTreeSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkKdTreeSelector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkKdTreeSelectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkKdTreeSelectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKdTreeSelectorWrap *w = new VtkKdTreeSelectorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetKdTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkKdTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkKdTreeWrap *a0 = ObjectWrap::Unwrap<VtkKdTreeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKdTree(
			(vtkKdTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetSelectionAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetSelectionBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetSelectionBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetSelectionFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionFieldName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetSingleSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSingleSelection(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SetSingleSelectionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSingleSelectionThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdTreeSelectorWrap::SingleSelectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleSelectionOff();
}

void VtkKdTreeSelectorWrap::SingleSelectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdTreeSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkKdTreeSelectorWrap>(info.Holder());
	vtkKdTreeSelector *native = (vtkKdTreeSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleSelectionOn();
}

